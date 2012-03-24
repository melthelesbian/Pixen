//
//  PXCanvasResizePrompter.h
//  Pixen
//
//  Copyright 2005-2012 Pixen Project. All rights reserved.
//

@protocol PXCanvasResizePrompterDelegate;

@interface PXCanvasResizePrompter : NSWindowController
{
  @private
	NSTextField *_widthField, *_heightField;
	NSColorWell *_backgroundColorWell;
	
	id < PXCanvasResizePrompterDelegate > _delegate;
}

@property (nonatomic, assign) IBOutlet NSTextField *widthField, *heightField;
@property (nonatomic, assign) IBOutlet NSColorWell *backgroundColorWell;

@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, assign) NSSize currentSize;

@property (nonatomic, assign) id < PXCanvasResizePrompterDelegate > delegate;

- (void)promptInWindow:(NSWindow *)window;

- (IBAction)displayHelp:(id)sender;
- (IBAction)cancel:(id)sender;
- (IBAction)useEnteredFrame:(id)sender;

@end


@protocol PXCanvasResizePrompterDelegate < NSObject >

- (void)canvasResizePrompter:(PXCanvasResizePrompter *)prompter didFinishWithSize:(NSSize)size
					position:(NSPoint)position backgroundColor:(NSColor *)color;

@end
