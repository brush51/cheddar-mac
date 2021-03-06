//
//  CDMTaskTextField.h
//  Cheddar for Mac
//
//  Created by Indragie Karunaratne on 2012-08-14.
//  Copyright (c) 2012 Nothing Magical. All rights reserved.
//

@interface CDMTaskTextField : NSTextField <NSTextFieldDelegate>

- (void)beginEditing;

@end


@protocol CDMTaskTextFieldDelegate

@optional

- (NSString *)editingTextForTextField:(NSTextField*)textField;

@end