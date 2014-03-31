//
//  AppDelegate.m
//  pbaTextView03
//
//  Created by racso on 30/03/14.
//  Copyright (c) 2014 racso. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate
{
    AlmacenTexto *miStorage;
    MiManagerTexto *miManager;
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

- (IBAction)Introducción:(id)sender {
    [self.miTView insertText:@"Esto es una prueba de inserción de texto."];
}
- (IBAction)Desarrollo:(id)sender {
}

- (IBAction)Desenlace:(id)sender {
}
@end
