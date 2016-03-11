//
//  GlobalDefinitions.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef GlobalDefinitions_h
#define GlobalDefinitions_h

typedef struct Frame
{
    float x;
    float y;
    float width;
    float height;
} Frame;

typedef struct FrameSize
{
    float width;
    float height;
} FrameSize;

typedef struct Rgba
{
    float red;
    float green;
    float blue;
    float alpha;
} Rgba;

typedef struct Rgb
{
    float red;
    float green;
    float blue;
} Rgb;

typedef enum ViewContentMode
{
    ViewContentModeScaleAspectFit,
    ViewContentModeScaleAspectFill,
    ViewContentModeScaleToFill,
    ViewContentModeTopLeft,
    ViewContentModeTop,
    ViewContentModeTopRight,
    ViewContentModeLeft,
    ViewContentModeCenter,
    ViewContentModeRight,
    ViewContentModeBottomLeft,
    ViewContentModeBottom,
    ViewContentModeBottomRight,
    ViewContentModeRedraw
} ViewContentMode;

typedef enum AutoresizingMask
{
    AutoresizingMaskNone = 0,
    AutoresizingMaskFlexibleWidth = 1,
    AutoresizingMaskFlexibleHeight = 2,
    AutoresizingMaskFlexibleTopMargin = 4,
    AutoresizingMaskFlexibleRightMargin = 8,
    AutoresizingMaskFlexibleBottomMargin = 16,
    AutoresizingMaskFlexibleLeftMargin = 32,
    AutoresizingMaskFlexibleDimensions = AutoresizingMaskFlexibleWidth | AutoresizingMaskFlexibleHeight,
    AutoresizingMaskFlexibleMargins = AutoresizingMaskFlexibleLeftMargin | AutoresizingMaskFlexibleTopMargin | AutoresizingMaskFlexibleRightMargin | AutoresizingMaskFlexibleBottomMargin,
    AutoresizingMaskAll = AutoresizingMaskFlexibleDimensions | AutoresizingMaskFlexibleMargins
} AutoresizingMask;

typedef enum Bools
{
    BoolsYES,
    BoolsNO
} Bools;

typedef enum TextFieldViewMode
{
    TextFieldViewModeAlways,
    TextFieldViewModeNever,
    TextFieldViewModeUnlessEditing,
    TextFieldViewModeWhileEditing
} TextFieldViewMode;

typedef enum TableViewStyle
{
    TableViewStylePlain,
    TableViewStyleGrouped
} TableViewStyle;

typedef struct EdgeInsets
{
    float top;
    float left;
    float bottom;
    float right;
} EdgeInsets, LayoutMargins;

typedef enum CellAccessory
{
    CellAccessoryNone = 0,
    CellAccessoryCheckmark = 1,
    CellAccessoryDisclosureIndicator = 2,
    CellAccessoryDetailDisclosureButton = 4
} CellAccessory;

typedef enum TableViewSelectionStyle
{
    TableViewSelectionStyleNone = 0,
    TableViewSelectionStyleBlue = 1,
    TableViewSelectionStyleDefault = 2,
    TableViewSelectionStyleGray = 4
} TableViewSelectionStyle;

typedef enum LineBreakingMode
{
    LineBreakingModeCharacterWrap = 1,
    LineBreakingModeWordWrap = 2,
    LineBreakingModeClip = 4,
    LineBreakingModeHeadTruncation = 8,
    LineBreakingModeMiddleTruncation = 16,
    LineBreakingModeTailTruncation = 32
} LineBreakingMode;

typedef struct CArray
{
    void* array;
    unsigned long size;
} CArray;

typedef void(*DoubleObjectAction)(void*,void*);
typedef float(*SingleObjectDecimalFunction)(void*);
typedef void*(*ViewCreator)(Frame);
typedef void*(*SingleObjectObjectFunction)(void*);
typedef void(*Sizer)(void*, FrameSize);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*ViewColorAction)(void*, Rgba);
typedef void(*ViewFramer)(void*, Frame);
typedef void(*ViewContentModeSetter)(void*, ViewContentMode);
typedef void(*AutoresizingMasker)(void*, AutoresizingMask);
typedef void(*Action)();
typedef void (*ConditionalAction)();
typedef void (*DurationActivity)(float, Action, Action);
typedef void*(*Exchanger)(void*);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*SingleObjectAction)(void*);
typedef void*(*ObjectActionBlockObjectFunction)(SingleObjectAction);
typedef void(*ViewShortColorAction)(void*, Rgb);
typedef void(*ViewModeAction)(void*, TextFieldViewMode);
typedef float(*ObjectDecimalDecimalFunction)(void*, float);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*ObjectDecimalObjectFunction)(void*, float);
typedef float(*DoubleObjectDecimalFunction)(void*, void*);
typedef int(*ObjectNumberNumberFunction)(void*, int);
typedef void*(*NumberObjectFunction)(int);
typedef void*(*ObjectNumberObjectFunction)(void*, int);
typedef float(*ObjectWholeNumberDecimalFunction)(void*, unsigned int);
typedef void*(*ObjectWholeNumberObjectFunction)(void*, unsigned int);
typedef int(*ObjectNumberFunction)(void*);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*TableViewCreator)(void*, Frame, TableViewStyle);
typedef void(*ObjectToggler)(void*, Bools);
typedef void(*DoubleObjectConditionalAction)(void*, void*, Bools);
typedef void(*InsetSetter)(void*, EdgeInsets);
typedef void*(*AccessoryProducer)(CellAccessory);
typedef void(*SelectionStyleAction)(void*, TableViewSelectionStyle);
typedef void(*MarginSetter)(void*, LayoutMargins);
typedef void(*ObjectActionBlockAction)(void*, SingleObjectAction);
typedef Bools(*ObjectPredicate)(void*);
typedef void*(*LabelCreator)(Frame, const char *, unsigned int);
typedef unsigned int(*ObjectWholeNumberFunction)(void*);
typedef long(*ObjectLongNumberFunction)(void*);
typedef void*(*CustomControlCreator)(Frame, SingleObjectAction);
typedef void(*LineBreakSetter)(void*, LineBreakingMode);
typedef void*(*Supplier)();
typedef void*(*StringProcessor)(const char *);
typedef void*(*StringArrayProcessor)(const char **, unsigned int);
typedef void(*DecimalAction)(float);
typedef void(*NativeEventDelegate)(SingleObjectAction, void*);
typedef void(*ObjectWholeNumberAction)(void*, unsigned int);
typedef void(*ReverseViewFramer)(Frame, void*);
typedef void*(*InteractiveControlCreator)(Frame, const char *);
typedef void(*ObjectDecimalSingleObjectActionBlockAction)(void*, float, SingleObjectAction);
typedef void(*Accessorizer)(void*, CellAccessory);
typedef float(*ObjectNumberDecimalFunction)(void*, int);
typedef unsigned int(*SingleObjectWholeNumberFunction)(void*);
typedef Frame(*FrameSupplier)(void*);
typedef CArray(*ArrayExchanger)(void*);
typedef void(*ArrayDecimalAction)(CArray,float);
typedef void(*DoubleObjectDecimalAction)(void*, void*, float);
typedef void(*ObjectArrayAction)(void*, CArray);
typedef void(*ArrayAction)(CArray);
typedef void*(ArrayWholeNumberObjectFunction)(CArray, unsigned int);
typedef void(*TripleObjectAction)(void*, void*, void*);
typedef void(*QuadrupleObjectAction)(void*, void*, void*, void*);
typedef void(*QuadrupleObjectActionBlockAction)(void*, void*, void*, void*, QuadrupleObjectAction);
typedef void(*ViewAnimator)(void*, void*, void*, void*, float duration, QuadrupleObjectAction);
typedef void(*ViewMotion)(void*, void*, void*, float duration, TripleObjectAction);
typedef void(*ObjectTextAction)(void*, const char *);
typedef void*(*TextObjectFunction)(const char *);
typedef const char *(*ObjectWholeNumberTextFunction)(void*, unsigned int);
typedef void*(*ObjectTextObjectFunction)(void*, const char *);
typedef Bools(*TextArrayBooleanFunction)(const char * *, unsigned int);
typedef Bools(*Query)();
typedef const char *(*Reporter)();
typedef void(*TextArrayActionBlockAction)(const char * *, unsigned int, Action);
typedef void(*ActionBlockAction)(Action);
typedef void(*TextAction)(const char *);
typedef void(*DoubleTextAction)(const char *, const char *);
typedef void(*DoubleTextObjectAction)(const char *, const char *, void*);
typedef void*(*DoubleTextObjectFunction)(const char *, const char *);
typedef Bools(*DoubleTextConditionalFunction)(const char *, const char *);

#endif /* GlobalDefinitions_h */

