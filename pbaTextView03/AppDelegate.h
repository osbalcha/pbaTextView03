//
//  AppDelegate.h
//  pbaTextView03
//
//  Created by racso on 30/03/14.
//  Copyright (c) 2014 racso. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MiManagerTexto.h"
#import "AlmacenTexto.h"
#import "MiTextoView.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong) IBOutlet NSTextView *miTView;
@property (strong) IBOutlet NSButton *btnIntroduccion;
@property (strong) IBOutlet NSButton *btnDesarrollo;
@property (strong) IBOutlet NSButton *btnDesenlace;


- (IBAction)Introducción:(id)sender;
- (IBAction)Desarrollo:(id)sender;
- (IBAction)Desenlace:(id)sender;

@end
