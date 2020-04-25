# Perl Program to demonstrate the  
# Passing parameters to subroutines 
#   https://www.geeksforgeeks.org/perl-subroutines-or-functions/
#!/usr/bin/perl 
  
# defining subroutine 
sub area  
{ 
    # passing argument     
    $side = $_[0]; 
      
    return ($side * $side); 
} 
  
# calling function 
$totalArea = area(4); 
  
# displaying result 
printf $totalArea; 
