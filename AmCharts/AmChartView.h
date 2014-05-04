//
//  AmChartView.h
//  AmChartsLibrary
//
//  Created by Andrew on 4/29/14.
//  Copyright (c) 2014 Chimp Studios. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <WebKit/WebKit.h>

/*
@protocol AmChartViewExport <JSExport>
-(void)amChartsAreReady;
@end
*/

@interface AmChartView : WebView //<AmChartViewExport>

/**
 chart must inherit from AmChart or AmStockChart
 */
@property (strong, nonatomic) id chart;

/**
 Boolean value that signals whether AmCharts.ready() has fired yet
 */
@property (assign) BOOL isReady;

- (void)drawChart;

@end