/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef IPAD

#import "TiUIWidgetProxy.h"

@interface TiUIiPadSplitWindowButtonProxy : TiUIWidgetProxy {
@private
	UIBarButtonItem *button;
}

-(id)initWithButton:(UIBarButtonItem*)button pageContext:(id<TiEvaluator>)pageContext;

@end

#endif