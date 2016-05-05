<?php
$im = imagecreatefrompng('image.png');
$str = "hello, world!";
$yellow = imagecolorallocate($im, 0x00, 0xff, 0xff);
$magenta = imagecolorallocate($im, 0xff, 0x00, 0xff);
$cyan = imagecolorallocate($im, 0xff, 0xff, 0x00);
$black = imagecolorallocate($im, 0x00, 0x00, 0x00);
$white = imagecolorallocate($im, 0xff, 0xff, 0xff);

header('Content-type: image/png');
imagestring (
    $im, # the image
    3,   # a font id 
    3,   # x position
    23,   # y position
    $str, # the string
    $cyan
);

imagestring (
    $im, # the image
    3,   # a font id 
    3,   # x position
    3,   # y position
    $str, # the string
    $yellow
);

imagestring (
    $im, # the image
    3,   # a font id 
    3,   # x position
    43,   # y position
    $str, # the string
    $magenta
);

$ip = $_SERVER['REMOTE_ADDR'];

/*
$ip2 = getenv('HTTP_CLIENT_IP') 
    | getenv('HTTP_X_FORWARDED_FOR')
    | getenv('HTTP_X_FORWARDED')
    | getenv('HTTP_FORWARDED_FOR')
    | getenv('HTTP_FORWARDED')
    | getenv('REMOTE_ADDR')
    | 'UNKNOWN'
    ;
    */
    
$ip2 = (
  (getenv('HTTP_CLIENT_IP')           ? getenv('HTTP_CLIENT_IP')       :
    (getenv('HTTP_X_FORWARDED_FOR')   ? getenv('HTTP_X_FORWARDED_FOR') :
      (getenv('HTTP_X_FORWARDED')     ? getenv('HTTP_X_FORWARDED')     :
        (getenv('HTTP_FORWARDED_FOR') ? getenv('HTTP_FORWARDED_FOR')   :
          (getenv('HTTP_FORWARDED')   ? getenv('HTTP_FORWARDED')       :
            (getenv('REMOTE_ADDR')    ? getenv('REMOTE_ADDR')          : "Unknown")
          )
        )
      )
    )
  )
);
    
imagestring (
    $im,
    3,
    3,
    63,
    $ip,
    $white
);

imagestring (
    $im,
    3,
    3,
    83,
    $ip2,
    $white
);

imagepng($im);
imagedestroy($im);

    

