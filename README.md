# Activity-6
Implement the following scheduling algorithms using Arduino or TinkerCAD. 

# First in first out
> LED 1 - 10s |
> LED 2 - 8s |
> LED 3 - 7s |
> LED 4 - 1s |
> LED 5 - 5s |
> LED 6 - 3s |

LED1 lights up or 10s, LED2 for 8s, LED3 for 7s, LED4 for 1s, LED5 for 5s, LED6 for 3s, and the loop terminates

# Round robin
shifted to the next process after fixed interval time
The process that is preempted is added to the end of the queue.

# Shortest job first
> LED 1 - 3s |
> LED 2 - 7s |
> LED 3 - 8s |
> LED 4 - 2s |
> LED 5 - 4s |
> LED 6 - 5s |

shortest time first in sequence
LED4 lights up or 2s, LED1 for 3s, LED5 for 4s, LED6 for 5s, LED2 for 7s, LED3 for 8s, and the loop terminates

