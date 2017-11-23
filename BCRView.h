//
//  BCRView.h
//  Black Card Buzzer App
//
//  Created by Hans van Riet on 11/17/2017.
//  Copyright © 2017 Hans van Riet. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <AVFoundation/AVFoundation.h>

@interface BCRView : NSView

{
    AVAudioPlayer *_wrongSoundPlay;
    AVAudioPlayer *_correctSoundPlay;
}


@end

