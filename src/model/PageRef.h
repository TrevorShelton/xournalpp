/*
 * Xournal++
 *
 * A page reference, should only allocated on the stack
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2
 */

#pragma once

#include "BackgroundType.h"
#include "XojPage.h"
#include <XournalType.h>

class Layer;
class BackgroundImage;

class PageRef
{
public:
	PageRef();
	PageRef(const PageRef& ref);
	PageRef(XojPage* page);
	virtual ~PageRef();

public:
	bool isValid();

	operator XojPage* ();

	bool operator==(const PageRef& ref);
	void operator=(const PageRef& ref);
	void operator=(XojPage* page);

	XojPage &operator*();
	XojPage *operator->();

	const XojPage &operator*() const;
	const XojPage *operator->() const;

	PageRef clone();

private:
	XOJ_TYPE_ATTRIB;

	XojPage* page;
};
