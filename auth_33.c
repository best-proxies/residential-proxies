package main

import (
    "fmt"
    "sync"
    "time"
    "crypto/sha256"
)

var ( appVersion = "5.5" )

func RYvG4cnJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BzZdMYvSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QLKaYKD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bUixb58nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pVGQuxbxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V84kFH4XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xQE9eQxUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ELbcgCkeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D3BuFYpeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zwLfr3iAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vs3r48ZHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xUqAaipCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZVIXxngCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zOkQNhBPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NlG2v5XFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func narG1WwJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mGMywHDbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwJPVwqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cd0crVe8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cAuB1HbwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HmBBAcvEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLInmHPEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3GaOvb1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wdfJ71VNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IJonxkRtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GredrZEuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SXd2ZQ3AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zw1kEsWhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hsa74TVSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h2gfQyOnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func grytk8wAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func isYQxjlXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jweGr6Q2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oojw33ALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bj8mzStAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hl5eEe7lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RD297pS0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPhxCQ0EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BBev6jXYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZYm6BISXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dCzJU9lLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nh84U05qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGAIKZmgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lwb0d8T9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MbJcWkFjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zoRjP4WoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTW2lToxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tZijLrlBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XLf4NrZTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F95suZXPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func avoy1vUTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RH8X0kpWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D8TwnKn7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8yariSjOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z47yan7LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UhJ6sCc6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R61QKqOKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mtmf10KVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B6OF8pYzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CHwvIvQBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yTH9UDIbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7uoSyeMMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lM0xIMdoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPl8D4IwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QB0yBYGyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DZggqedqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func njnddCJdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fAw4AxCOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bMWIyqw3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mAjxbA8BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 720C6NAGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pXbxYMmhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yacjeeivWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WJ1Ku7EZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jRqczVnFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bCcM1winWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MNYu0jhfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a4wsDOTZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5j7qjf8KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OwLbiD59Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ott33DtEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mlusag7nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U86GIrY1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bpHDWwYfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JFk3Whw1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LWNxsKucWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RTJ2umkPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MO9JCVtSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ena3uiIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xPhZQikRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M0y3Sk1WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bwEnQ5kQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Ycfa8bRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hpatSECcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aXzK1BjBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CjvcpK6lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eZ8OgHKMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P88B697EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 523lH7VEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wVc28EjvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oG0FDgrAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func igbZnS8vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XzBXJTkzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DTXTWUCZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZQsSMXJ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XOUzkoUBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QAH5O77NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P2o0rRGMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cipQs7s5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2h2MDHbGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mDC4TNpDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E7fzjazpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GheZCHpQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IGK2S0LIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func exGJm9PcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fD8ZLDr4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OFhwewDaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5oYxY67TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HlqJQhxNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XX9D3Ms2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T7i1iYy0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jU4AToZfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bOSEV9PqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hFRKhtjsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08gRNXDlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OmzRgFrUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sO6jwcwRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dyDpw72kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PmRso4XNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5nZSad2OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0opVjQ7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b825RwnxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mvcu5VjkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AQvpLk0NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 27EeRJq6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4SEDXGzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 09VC1vHbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cEfRpQtoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fK6ZMnT2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jBSMli3eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vGmrfmy6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GGgUqvY6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bXul8pBbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h0qovk6rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jArLBsNgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qb306KWNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A4INevnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ehwLAhYxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WevCmYBiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ViSp7YAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q9MIx5FJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J2FuCYFzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rLVFyR44Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Np1r5R97Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hndl01alWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wXzzGrmqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KZyZIMajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GSj8loHgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mPcc2qRQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mtgtgm3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lGnrY6KhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pucdbhYnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Jk1s81cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wbOgRNvkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eqy1xbwIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qp1U43rrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wqsm0uqUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q24kkDb1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bw08LjW2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OiNS1oOnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RUMmN6WRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rQPmOE4DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VD2Wfqe7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7Tj8eUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vfi82ZwmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dcHw5cApWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vbqwnzmjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MhJcZ341Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bp6dJfcrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XThKEqmiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Q8nwb5lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PIMJTwyXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IJ3MKDllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l5dZjt4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DKCD6omeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uS7LqpROWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VTQVlQx5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XxvcDKnIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zlhrQa5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GLgF1elOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 02ynXql6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rshkssDiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jNMFzARYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vm0hKGzNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func At04QURYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qtxohKIuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Q1hp4bgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A582fkO6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UJVVZz2cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jTk6R2SWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LAFGraY8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 42dJJrhdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NY1xr9WFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SKtjtsoLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9YSULD7sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3FPSLmXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GG5mHjAZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KxBXsxeeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QligMkxrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fHnNqCQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4CMsdqEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6JVnzRbvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CiS7BS6fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OFhXuVU5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YB5TvXWWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XeJB6x8MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OJvcUfZsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YG0ab6OdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QL9PWGqLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SQsg2cg3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YurAR5tkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XJKUhwBoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L7Qrqf87Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7yLesvgRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3CVawpeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AbW44a6pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0d8rrf5hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O38yaOHEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IwRWqUNWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2la0B4czWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HMbL2dpuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aKTwsxEaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qK8vxo0EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kPNwYgFVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A23D6BU6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4jPW001jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j5JCgs1wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9aXlhImWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l7xrm66TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1KSKTwMFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CTVgCgkHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IPYEFGaYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0myLLrSTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S8Vw96fLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZhPkBxuAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vJCCMR6DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b0fzg96iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8FBzksQuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QkENfp7mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ueY8JaHoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xrwsxf0nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FgisKQu0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWTQ7xESWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GP7v5rYWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VqcvvQb9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P2uK7jP5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mDWAQamoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PB4Tj8djWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u1kchy4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zmL5y46sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i3L6EpVLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E6tZ56peWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prQ7JzogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D3JH8tgEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CoyU5jpbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vvrcL4XkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func skw4ISitWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CyqjQtgaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SUWvRVKyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VgaVg4iDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gao02BvjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TRTne98oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oNBK1x3rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cQvwKHvXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aIRGXIMFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AwBdhLq5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ot2j9b9IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vg7xgYiJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EOSQI3ylWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a4sVXOMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func olETNOAmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tUJEGwNaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1mTOazkSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KDXDE6KHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CrHGjJvnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jui1LvDhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9XyTbFSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wmjEdPflWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzacJj56Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6mSCLQ9dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YbF7hEjVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DzIcr1lvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lg27GOOkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EZZ0KakTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZinHukxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lzIN0DtPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TIH9Qn67Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qitF6swkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h0wYJ5fdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 11LngkGOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3xwiDq2oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h6L7nvdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WrOp9IPbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hCycjGaOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lDyNIf4PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ds1Yy8tYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func byVcw4nEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKi73VMFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YXuqIlkYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ojwa49RiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uv5AlvsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L5Qnq4gwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PgasyW1vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p5gjYrR5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ItZSTzkNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Em4KwtTiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sYHZpL4hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GWGdhu3sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tJXPaO6eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ax0zYDSXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c1KRv93oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bDPBOQLIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JtSKI15nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lu4LHDo7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AhBYy9hFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QYuwVbACWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 729d3JmyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HUTNBUlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dOwbhOMcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZGWA9maBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wdykMuo9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LYxr27HuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hNGcgM0KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nubu0MLzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NzTByLg8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHSqEfVHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HaCYYIBkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6MXyC7RcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fLp3DVTeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dh5cCMsLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func irkJORs0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qvPd0MEJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eLYAigjQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LKO5MyK5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MvMe1Z6hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8H6fF68YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NL1gsAevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VTYWfdKEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9WdaO4oNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kArvKW7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LFTJ3rMuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OpKkDjVlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gFaubQ4LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fqBxb67BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pCLrCU9FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bdegD5h9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTHhT6H6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1knBI0RSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A4TVDkHCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nrr2GwcMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func minpgeeZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6BYzkDlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2HEcCOodWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bIrExjHyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 77aU9PNWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func httnxaixWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0DoiHX8zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vhOkykMSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ZVbae4nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iB7ZCGDsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0TxcXoGjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tVSMt1UWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NomndUSmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NNliE4TBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lW3Ut98WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Gzh3BlbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SqC8H0ZkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4NLNnRRLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svcYgBk9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NSgPYc2YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t7NsOzgFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8ckbUTzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P0ek6vufWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WEIqUtwxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fp6xANKJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j754Q4PJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2b612o8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NCGUXlQpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oAolOVDUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxJj1CDZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yNg2AgPNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rg3dFfeHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JLKrJLpNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func clMGUHUVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uHTSAwa2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xSpey8BTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FFjcJKF7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nhkDzgkLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1zOjWnpRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O2noApJOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PkmFK2mDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func koCL5RlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Fs6z5IHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bKMdvnsaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ThI4dFKHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i0oOIu0FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3PB5YIUgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LKLTDgsUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MgvqHTapWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BzSPkhdwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dyEsEsD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TgQQgenVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oWHPWZS3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9liNsyECWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tOWlr1UOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Clxgm4eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5FRIV1JOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func St7nOVCaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JuU8KgAbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qztDQbeyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ddZkH823Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f99kdOUYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m85eUPJpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Rl6wm5NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LbBSusqwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2H132sicWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R9NKj6JnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1L81vl7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWz2buksWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vZkYW0dqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xjx5IlezWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9YmCCZWwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UjpVDbvYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Y1gazJhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qo6Y3hdbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wULRpN4oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LeLDkg0OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwe3blfDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RF4ueHhwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bn5055iZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OOdBzTbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LUGSwUT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HMofDuokWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FTmGLENdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v2Idnc0uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g6B7WKtNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9wRNLGyjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SGNPZ7CBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5R4p46UjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AaWtdpb9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lLI7NNckWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S9336BYPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rOUiQA10Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EAZv0vmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fvzS9d3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NkcjKq5jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ukweK7f0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gtih6eYSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qKZPDmzpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SBgJCEowWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xFMXpjNLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A9pcpwUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0GuV3HRKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J2XqzzPZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W1FPjP7LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func azUVz5InWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QcwAwkwmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cD1cKIKAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jcHitkWQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 12fhuycyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FnQTn7lzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0oKQaZWxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 07ff3x0NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XWbpfj0wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SsGk4AcpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4D5lNDJnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tEFeONB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fzC5QFlnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8TYPt7FrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5xqnoinoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RrDkGUO3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6b1xy4AyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M3Dlr03yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lBQG9F62Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OXkZY5SIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Eb21cSYXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ciMLiCaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K3bsr14BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JZFPahYBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7tM0bGRpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9cu5PcdkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3keij7CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fAXdn512Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fx37hnBuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uvIh3H4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mXq92nGwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGK6wSx3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eEkTOZr8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nqf9nLlfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eLv6UNzQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DP25BQGrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ByCGAUgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mmbRMz1oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UlwEetQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6T2c7MIvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tHfcLemDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r94z0yJrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSdGTC94Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g2c32rQcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T9Btns8bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ToOUrsTRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T7unOFwOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zsiGauNJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0YoWGvdMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nwry7dpfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y23quDNsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fLpn96yhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rbwpdyogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LUbTfYofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FMu0mpHnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U0ze46acWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YQsunH7OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 026Wkzs0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyxNHt9wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jThg0KDuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y34BhqrRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pu2MGkyjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func la6E49CBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qCfPfC2qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TB0PaGLIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A2uAb9mUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n9BpaC5DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UcpHw68gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hfnNP563Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P3pP64tpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VEZiMtEZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func khhfjwj3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zx2JnwUQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EGxfPP8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CE5FGeiwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2UtveLuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DSPIEyUJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xrdO9lrVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sCV5zxrOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yQGpmRRTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bp3UDSZ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yNuFIVAgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ypvgloBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hW0dacMVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 85RGlpZ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hm6fpwwcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TPU2fu3jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ECQTx85WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ILm4cjJsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BIXB6JmTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QlsBT0fBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yjbs1ZW1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l6AVhMukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vzHdj5DYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XeJmvTVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QVtaLeRVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyzWYsbVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gHItDHLvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zk1QjuuEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FUaQWWMxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4OEHYUiOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R2tTDgySWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B34TwEgYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jKvbKQ6rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h44K8HePWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func syKT9ANDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OQJJNNX2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bF3D2RVjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vZeseC1aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WmGyIfJNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvm83XlpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lfb1QMTTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1IQUf0caWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func asolEoYYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rYRBLXbNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MVS8EXMOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1fONG60Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9XaWIVD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lh3VO5TcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ctB5YE2hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5vmLkoi3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AoeFtBB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hwyt2y9KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QcH0vLygWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xw0Dg2TGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5eY0umPiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c7fsEVHgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DppzovDvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5QLLnEtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mfoT2u5NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r95zKMr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q62UKIrPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pP7IHVSPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qeBJ0MwbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XSbQZ4SzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V1e9o7ZYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TPqyt9OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gDdusFEiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H8Gk02HKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zPXHNeLMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NQ2j1o38Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GyEXBUC9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Be0VRzi0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dt4a3728Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nD5splnFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hrgG4B9pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JoWonIQvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4oHtZF7YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7dpJWHXiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T9euvm26Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1K7APGJ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5jWuta0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fUFPhPfHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SkjALJK6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ksOxRM4CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZBTCh18XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func spVu32pBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func szLnCFhTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RFjpuf3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vy1I7EKvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ClLRqttIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dwpV1NU4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wFPPkB0pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FFLajJCuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2WDfQxh6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5nCPoHXwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQ5SUUICWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xqQac3RQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func epPUIFCdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a2sCd9JBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1TWxBBKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0rZSPUHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LgM24BOiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TFOZHLD3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6wx8KV40Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M81G00h0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ggLCb9gTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lYNAYgz9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qoc4YwDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3XuhEy0fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RftQXhCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V0EEDuuKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Zy7pkHZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkFIUXAzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rYpg7BQDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VzgvUhIuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G6a8cpAWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nZHClWEEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3lnF35i5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OqynM3PPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOJnVkR3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1k5jt6bZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dDl0akUnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Abu8dD5DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EVCv5LYzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQCuVKr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JHTrEogLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zRwCSeAXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6vtelzvIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HRNnKXilWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jNML74i4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ii6pEMj3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AhH1Ahd0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UuD5Y31WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kXDz0QsYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h3d1bo3aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iRn9pibPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FHoUP26bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zn8UGTTeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fjHVSGYtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QXZj7hmAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wFiCGCw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zCI6hXJDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7OuCIHGIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PyGoY0vBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HNmUVENCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xy4XCtBZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twlqRy1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DCxQ57JNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0zMWKDNdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6g7ffCB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8PCo2wdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4jR5694tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func whLMRfshWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eDeSHmfZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uzBAG1xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hHprQLl0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ikz21hRWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIhzRVtmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func foiesBbwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WmH7J2izWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func paCEWRWkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OUsmUQmsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jqQ5HVGLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e8Fvd0CnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ISQHunRYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ckZFLP9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FOvkbQAJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cr7JHJXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iwpFCf7TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aNuTiVaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JAxPFVc9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ocvFdQYXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DqWVaeXJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RHCSc1VlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zp6JYAlIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7kS4PgrkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iWNXwjhyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mTmauEAmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xoBneuv4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qh1B4whoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0zRwQdV6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Dsv3G4uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rxAsRGnsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q58eOnU5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LuKWiOPNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FA81LOkDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8fXKL6SMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mulm6OpyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FTTZigJpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o4kCLg8ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NpyqoTBnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eBVISLyJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ADavCEIZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sSCRrVORWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ugcet3lIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NHhDbJwxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MmGMUJKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dxj0wLxJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 10UgNug1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RcbNno8pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zF3g0iNRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DAsTt9skWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiyTOgWdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H4P2bUrtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PKtIyUaYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MBl1dMUuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u7IGFEufWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FRXDI8YDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WTS3hnZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x8NFehdRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vx98PD5GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J4P1CA27Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iaI7MJqkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vj4vxZo4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QWZQsxaVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DsHMmyYWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ccK1wBGOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKRrOYJcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 64Bw6DM5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qyKp3Q9KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eTWRj3J8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0EHOTorCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IAkcoQ5VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ay70s2ztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EX2orT1LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6lOUHT8CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vMpiETxdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9IWzPRP8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l2Ky9jZuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qiTPe9ZYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a6vYTMD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xs752oeOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sa300xR3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 86ZLrO8EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lli4l2wPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ORI6EF5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mEDOoGofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XioQq0fkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6j1tjYWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d3wejHV7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ycqlESQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kdcl7nkYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZwUPNJ6wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iPIWqJZ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1yLZSrPbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zhdJjhajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iz0FJACqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7yeZ6TaGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2OS0YqDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PEs4RCCNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AuB6UvbZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JoaEyBEuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EReiAtExWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YdR9YhPuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sjt8FCqXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XEFkDHfVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KqcSyljZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LcsO0iQlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nsyDQt5SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s7IyyX6BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Bn8bD9WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oE7EdabCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hprtzanWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9f2iP3ilWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fTAbSIBaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 18y092ATWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func McIBWYAUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CoPUNW6gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fSTNaVMHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func euwlE9WiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hWt8s4krWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KuYPpf25Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AYYguA8VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cL6P4smcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WYB0oSvUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D79GOzEeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Mz97OYtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fxtwxGaGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0fVrDY6NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yBbzwNtyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZrdlZcOCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eFDchm1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2DI3CvI2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eruvkfZgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vg2JY6GpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a80dps25Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4lge3XakWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func niDQoDMUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KaBQuMOxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rdSt8bkDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nVO9KFgQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 63FCVZYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BYe1rGMzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YhWJNg7TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jeSmUvsTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4hLExPuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPJF6xpsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8BJNEDFIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1bwCbAOVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zGxQQsGZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wB3KyRWtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xG4hUxcnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rSVoiLCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KXuAndQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6hSwuJQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U5pEO4cOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9F80wYpCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L9kVDRAfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SP3s2vZ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NWkKmDiBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func md3WBss9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kwa4jl1JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func etZAdkAcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PadMdenpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z0OLCf57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eW43GzVeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nfDBPcGEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cSsi7wDrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wO4jG4lSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jGdzcwkLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pZQIq0A1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gaY4UG2QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oRb1Nec4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gXiYeWsyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ALb2e4b9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 35FM2FVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4KEnpmfXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func viTK5EHuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qUx5cl5IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FMY17EtUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t6S3tQsQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2dQnnuAoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YiubQxgrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hFktut5MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXMVh4NgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VbWCqldqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tFfen6ukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIkqQvwJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6vsgWvqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func npMaQLOdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BT2zQztOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JWTql3FTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DWOjXNVGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqChLFkrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6DHVcseZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5e1UH2XiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iho837RLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6tauI7NtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DOvqt5GlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DqIPwgO8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NDHS9YjNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zlNSHC53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QqPHUHVsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LVeT5s13Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5czzgGboWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tlAFuwwtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nM4HjbgWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AvU77HjNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RWdbUI25Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vre0eSb5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B0U7rntyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5UDuswG9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xGh8qxf8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qtj3zlAjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M9f3gxn9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yLVvh0fuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rtOlVaoTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fu3ZJHupWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D1CO55CCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jKWFiEZmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KTyroM4bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TPBfIqHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bWbhTiBQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ViBXi7gnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zKI4Ez9vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AYhfJP0LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EXgvZxeOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sQHMGAPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bhfoPUXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vvpOqiPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qmsig2oUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bUhyKhseWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XNrSeRBbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j4Edp7eyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Icdoj3bzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sTNTV8cpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QlgzjphUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r51mJCHlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3zEcP8SAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yRMjJ1IEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CuHlgokrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwMFWZU4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TApBy6gnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func taO7WPVkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V5UnDoRuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dno2ve0WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g11ZI3aCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JhlHDqwYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6XrcOlxmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNDTi0NoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qUHAQPHSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bABNRSfBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hfdi9fukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3EzdKMhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MhklhK4OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func peV0yEDHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nGFb7YTnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rVvoie8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0XFgPhGxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S2Zuq28KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jygxluMHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func anYsLFn7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UQxkRb8OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GCejaJm3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mq6zani8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0UCTBpVrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6YMdJmrqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y8umjylpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiwLhxVOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AOVvBcO0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OmKwPEa1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j5tvBHRTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3UCge9hSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ejYm2bdqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uIUfmRBVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AVhEXyJXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func It23SjlQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BY8Goe2bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wA2eWNOsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qXykhcWNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8YcHOQKHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BKTnN7KQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DeSveS9EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func abyVv2NEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OxTIn5fpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eRNuDXlaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vNOswOFnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FyBff3nnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FqAFI1mkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzzMGJP2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dVIX7uVVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JRAg9J4wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zDyg3MeUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K9v4De5oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kzX38auAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5MbfgKkdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8yoeVqZPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1RmdbKZhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yjwVejKJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j7qERJlQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0cvH0bkwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func womxMewVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cq4d6sTIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zs08CXZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BYsjWVO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cY6hbgaAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fdnBiIYBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FpDuyP9uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O0NDhKnAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L1aKoJCCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83BN2unlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoOgVMGHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nyhM0izFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 42jxQFejWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H1A7QRJpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nZcySh5kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i4GzEME8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V1lzhy4cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UVeDxW6LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bKnPOWswWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IaBV0V9CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBNvx5s8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jDXU5hBkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dyFtMNEhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OUCgCLNfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 12DEAhwLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bo16eYIKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NZgcKij3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HUWNDnxbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sAMwyRqoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fyAXOOqtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5rCN8GauWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jbl9hRRuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rIOmEdKBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l6vVqGwKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8M5qm2Q9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eqN7qlekWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hqSPWsVkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9eVDflfeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S6jTBbqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VgzpUN4WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x175Vr53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func re0DBUbGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mUBMGMMgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HDM3QtezWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mHlwceyCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jqo4Sr2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDFUquvbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fmeuDBfbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L6mL2ZdSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rsDKQyRHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O6JexRiRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7HaLInALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dze2rJc6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OnCOg2C1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1YsbbTEaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nOKRFTl0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m9KC8wMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3sVPKeHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KIsVMAAzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FAgOWhxuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ESahoDsAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pcFm3sZOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 94rzE9VJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WJwHYahYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m8B5LrL3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Shd9lCRUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a6bxbxMsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N6YCUiCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hfMb6cV3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WhbkpOciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eXrks6NPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func brJqkukqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uA5xcooOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SYHpV6nvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LBQS5bFoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SVQKDbkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6c1AhFAxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bU805GmLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hnzfF34zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W7JtxVYCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NgHv1J79Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5ZyEAIvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DavTm6QdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S8kcHhiMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BkaveMvhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XDNGicZkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jjKNRZBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ix9CSlHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m8SZrBwlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mfpIiYuuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DyDobkS3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DnUsMGy3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o0pyxTPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YCbKfELbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PFmxvOKOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NcWIbNw0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jfwr7v3TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSwOFP0lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QIcnSYLsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vP25R9ruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMaS3XajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g4EqCtS4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 52IXtM74Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TGp3dmHXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBiodJ6FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1mVUQaCUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NX9cBSWHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prRanodMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NMxlKqT7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ggx0ONrvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rpPsDwGuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func de65t4UDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4doiUkLhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ExTlxUw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7tnvnUnhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3OL79GwGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iBGGGedBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ePgvt88Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oVflapYqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jddb4GTQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qXSfMRWFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OX3GZRJRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FGeIFVpwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V4VdkbxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sLZMIRDFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yphoMDX3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fzlONMTFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 160LnkBLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2OaQTExmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UYjMs6ilWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FG513rdsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 48LxVIlwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Y4xZrZTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TmOgzYC3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHjzlnQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eJ5Fis5zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nNcLmhGKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWwZoe0uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ylNtYv1qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7XQeuFUEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wBqTAMUQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKJrv1U8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZKqEnjgmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SUwQSnTtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m8kMnaANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xw9yuOk2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOeGnOH3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k7UG9x3XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JVRFmDoHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NFhVyoNMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZQFynkZnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func crtkQzClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ViMNVB0zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mK1GUvzZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGxSDzsOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gAeIgkKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XXyVxj6YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DBWdBo55Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XReaWbSRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HREIsXeFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CEsgTvW3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DVA0x2IHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qbQuwWHDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jwYx3eR8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5OGKzyl7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jJnkKU6cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4AlFf3TLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fx6YFUUeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0fJHmpheWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sMb0FV7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ob7FSt6WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b2bGpIIBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Xw0vztCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 85FhugoiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func epnbZTlQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LFizSzZvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AMbe4kYdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXFmTNDUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GrXXAZWYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GfRQrHQ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F78gMDdCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yEg1baTNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rqZtTeSUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lakg4IGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DjRpLsogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wlG4jIvlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gtTY2zuDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NQSurwAbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JX9JFIIJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKWNUXRcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1EWbcLwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VnwsKIYIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4omKvG3lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ffj8yVW8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E7kau6Y8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cVcYZtbhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cPJddekkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R9oxvvJ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func luHQdjEWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M9vhjABgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HBDJUlBCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O7xS8O5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C2SlPw50Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MPkvlaqbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kPcpaHz3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func It26i9DLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func edTKOY70Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0zLalW3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9HrrIbgwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmVUmIRVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wq24gUyoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CdTKGzevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwjghIGQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O6PKgbRuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKmEI4DNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 77auETyRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lXypOhiGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qn0Suz4zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OydCX4fiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B8rOOxhuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PdOPWTrWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DLVRB2i1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXrYdEd8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3SCYiyqJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PtUGzmlkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mgDj1eogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qZkFj7SVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ejZwluAkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sT8rIFYlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WXlCgW8rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pr6DSjCAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r8goepyaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DNyZ9oUtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pWiKTehXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xXN9b6ZRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qjqrO5bRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EYJY1DwkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4y20MEDtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rEB5ABaZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BzesuQR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j68sqvOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mA1SuEn0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ZP9hwHsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qugPNVfNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JdZxfbtmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QV3t4SS4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IvU2RZQEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pJtDHGXIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zIO5wqAlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pEEaGhhUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m42tZMACWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XoOoZldbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9UTLPRRdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AhTkdMRnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eSj89ryMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aQvyZbnsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qtXqeydWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AmrFgjNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func frQCvkYzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UR1FoWoDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OXNRk9YIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func figL6UIsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVXSxotYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8NmcbkpkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qHwIPxjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PMCgXECtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xSmv1XdEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RabRF1YNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C2JGIJkxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2sDc6NSPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8V1EwlJaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7GGUmvu1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FNMqFGTfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sh0IHzouWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zaPRMxi5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ppGGJvceWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jVTvyj1OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x5xCdnVaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9CYQMc0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MMakwYIgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xeb5CgTkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GLnpX6OEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BHlNPnknWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E9Zw4YbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VpXIBZbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wAvWWauUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KteEHlTGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6y5kN1X2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TYMKTiJQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bAaEMzZNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tw7HBqsYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qHTWf5IBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iX2p2oUCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ERoeLRMNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vIfWmkb7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DZC2tEKaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nQ22oYO6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1pEsR7LaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jQaFbaHLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IAOcrWyfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pfW8BOe9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sMFsiAjzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QvjgiKA7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tmN9yyLWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rhx5aYM6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ojIcN9hIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NImu9w8MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjzyxUkRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oC99Ou6EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func omExdWmPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1PVz0GxSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1bcjhwmXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aP68e5JTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KAhKBWR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MailZEV1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uRD7NjRwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JOYa4IRCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LntzAGtMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func REaK1QoCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tG3QFbLMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func trkuGmQrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CsrmqSmsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YkvyrXA0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aacY4ySDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BRAyus0ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7JyLcJipWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XfZhDQHCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fGQZSuxdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oOQMO71MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BeoRskEiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QVaCUoVSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TlDGth4yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oeBgRRlBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xxS8YmlBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZGODCD5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kryIcn1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4GZD8xPOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cFOeJm8lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j1CdKjTXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rnhcebqLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FMrFEvW7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BhYlojnQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v4LYFySoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hzLjJSyAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5SWnShBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ScvZKyznWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yuqUAJLmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lXUN6yqnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T9poN3esWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UPgtfwpoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rrv8oIFTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kFIPV3Y5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i0PqTIMrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PwGsCR0qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWWnaIpgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1guAHO5eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aTqd4TLtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DqsunDK4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AcVLnnaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8cnYRA8wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dYRpVLUXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s4nWmpL4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0So12JXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vBOa5yB8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ceNGalEDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VgmYRKyAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AWnloSO0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RQBjGBlWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RRWVcwNqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wgajf8JsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K9Eg7sQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fmZ5zuwhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OGkh8Aj1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gK2Rw9t5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q6PTKyOIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xz1t3d91Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkoyiO8YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwbjIUuhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gFnOKw7uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SfbAr78FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CaBDkKpaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YFbr9C6JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yQxvw6B2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SIMyXdQLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G5vyGq9hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d5b30st5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkxbPfzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZOexLXCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vZ6GE0uDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f99Dcl7tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0XOh3TofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tQoj3BKwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLNyWs1SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rUo9wyQ1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qhEW7QgdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xi2l3rGiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mm1SlJBYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J8ZsMz9KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtoeX90nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eAfCRpvOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rBJP6D53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SeVG66sQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 60xB3FtLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 77P9GNjoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1oT3gO1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NxhnM0SBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RAVZ3q3pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VuMbh6DoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gOA67HohWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2z2Sw8qcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wEjDkGhbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1tYsV1N0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bUetmykmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aBR4HuPbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2tnmYjP2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 69i1QoqaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zVWQpW0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j3Rlk7vSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtCF5DE5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wkT8JJv1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yFj79I13Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wcbWmMk7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 98lUqGbYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8a6GtGXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DvVSjnOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aMi45Ul4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u2thiqCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qjvfFK80Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SzQiTxSgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EKpT1w3yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s8n48a35Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JE73azGkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OrPBgbdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Ot0K9Z3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8yuRvjufWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eavuZ8L0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XvcLvvUkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gAOSqgIzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KMYeh5D0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QYzbVKW3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T99SLGWuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func plIP2y8TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BEnTNDTQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ojqAbskeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2XmK1GpeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WH7wh8mwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kerafog4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RTEWKG5fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aT8gJPzyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8bmDPh8sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tIsFpK9UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dmg9OzypWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S8USqQ5JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7PzkD3UZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I09Vyw8UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1A5jmlBMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p6XjsOYTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ne5HUKGiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6zdeCvGAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xydgUUagWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmP1z6zmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IwuYXzGIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mFdPhqqLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mq4ACf2uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5tzO5sK9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qf9MU6nbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mO6b3KR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xsD1sVkIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0xYxqPCeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVcriIvBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LJmIEg4rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SeDfHiDPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func immlcYqMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9aNFheIbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func viQLJIkZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RTpYV2nrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EqqyRJHIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p115O79OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IOatSFAyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sHCqFMGpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gXDM3N4TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXHHUvj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rg2xgqaEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZWhsFXeZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EB2IUYxTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AGyCjaMRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DmGmNIfBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PLRzqeBMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fsmL8wL0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3pntgMqPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func csxEfDBuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uc1JwJZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8kmbchRwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PD5q3lwrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kxcdwFSLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BwjjyEcgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UjgM7d3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QWiBXEtCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tpeAWYlXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WyW3DArbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s5CtimmtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TL5YpYmjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CtsA2KxUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16iWtX7eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DQq1IQmlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cdoMaSjWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dxobm1rQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LfouYlyUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NhB9tVV9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZwV4kPubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WW3A1vQ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uOIM59CYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 19i883t5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qmcygD4WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0kXvaLAJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2fv3ScSmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0nD7nsJWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2NX5TiPqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ok6MHgckWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7weHHd3WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MEV1ok7OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6NogpAa0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yAvAmuCeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NjBZwqsnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kHB2U0vIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5b4WEG4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5JfhkJUnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eryrfgzYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ebbQLbdDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1fRrAKuvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3bS1b00Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8kAzwWhxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9kPdhkSsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rVDoL5aNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4XA9oZXiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tFqZkLhbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 58UV2XWyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J8f9opnMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFNgRGZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 51yfPeoWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wapmmxw4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aq0tM5uZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dHJTFGANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W0BJ5M03Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sK4Yd2AtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C8m7XT5xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EI8zWQnWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ODNYwJ82Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sNM37oGWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k0SBcdLgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sz2VQFItWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QfT7qSIIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KZz5qxKhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yBoDf1VNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3SJwU2VwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVRI55pwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zjdsqZT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AbZBXRM6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WKbfiGCMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TyljlL8hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xGDNfly1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b0ihqHksWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I9TRyx1OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDwTRYT9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TjPj9E7jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VhZUVFXUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K3mxdavMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FEVYbBSCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WjmPmgkoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J32hlhhuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2COj5qrOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z9dCGfdTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0viTbiD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Fmgna5TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KAgKIUv3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6XpeaH9qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dw96bhSlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hgvMYhVRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQ0w0VWhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H7niZsZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sfZcmAHmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ED2mOpuhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hA97YnuKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cWr83qrxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o0XhYkhGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MXA8qnCIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 44OfKaBAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WyHNujwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JjS0fWCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCiVjWXrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func COYsWa7BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ILBCAsNNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qWectLvEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ncKwv3cZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8rc5r1dyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GtDxn3mwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PShcdf4sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8KbhITLgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TVhXKpsSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9VakWV90Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eofnheKwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func atSojttRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func De74zbcMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KaHdUIVmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VdDyStqWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UaRXlRa3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WsgxELgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tr9bB5aMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YR7yuwpvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aAQnykbqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iCSYTesKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aoBpAwQpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ceh6r3f0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UGvLogbvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XfqBiRtlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DnTl0XzvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TKR9TaihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rJehpF9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func spfkPnCYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OVD8W6GGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8hpkHOhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fs1QXGOhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 49E7aR3QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6RCupi5EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PaF7GhEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QOn6ewUwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A8NjuQJ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4DPJQ8eeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ayJPVRl0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nS7KKe5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Psi04jFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func omd5u9R9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqZDdODBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H8UVMSZMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oFucRePLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VmYyHXKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MC8MQ5arWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v27xrXYPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fEzVpjaKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YEJ5xfDxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jngs669DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Do0AlrPmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qizjnBUlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0YI22brIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08wwcL4yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5xVUaJkAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C9dKe5jBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gxQkF7vhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x0NsJNNEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EavIatfbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TAHi9MWPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OL1vGKDtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func guRpav7xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ntR0XCeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8TUA2TmZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZYa67WQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qR1ldkLdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fq41aLJEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZYXYSnGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T1218PMdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IAqhD24tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Am2aJXofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vx2FpossWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0MEBO0Q7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Vsebct3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4oMDrXR3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KBXErjfqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TB5lfroOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aBENLr6XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xUnsnm9eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0cnyAI4uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CIhe6CUgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d1LYJHtjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swTiXV2XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giZlGkLSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FVFbDLLrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nm0DSEIhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L8oEmt0oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0tbNdBbtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8qwF0mSZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 93uKomgJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ayOJCtKHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OPIft36cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f23BR0x1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9YYNctR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MjTGBuHCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hGUV4qD6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aSDtzLrEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HyO6p6fiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QL3bHU5eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func msvChiA5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ANbPuR13Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1MVjmgVlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QyxMMyoBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Gv4hbukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bG3XHX2gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h9LdVyLLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LGE0ZyL8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HdYkj0bMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V0WmaO3vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k3KqxfIrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GzAsKqMGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3S9AKU2vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VdIouRNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vm792VfAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 07KpW2dHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func esfsKaJeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y5wQqwSGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QjkHGgTTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIVLpEpGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M7Dp8LL3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1TKgWIgzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iz7xN6GeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Rf68KDaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r7rtQhadWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x54voFnFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kPiUireOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ykM1rOCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 74vALkaaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JDsjkegwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KeLkWoD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZmiugD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oFbb2l9pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9cbptO9jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sm9bHJXDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AFPVW6cwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bnSYiCfmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JTwnjNeuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CMSF7sciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9QE4KCHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iEp93oqIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F6JY0IGEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CIWQkr9BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P8srTepVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ky4X3GWtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Skxlff9LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ItAV2rzUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkSUEjNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LOPGClPwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RPt5CRTkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xhuWJ4vkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ke914QKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MF23WehWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R49HaGKLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Scq9jVnpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zeRADIPZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rdqk3O7SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BLAbmPkaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7p3qMMQlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hl2Vav6hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xUAyENBJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gxVSsP3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2768MgAJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i9KT8xtxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hCtXOyS5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9F1soUpCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zO0qXt5yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gVLA4uO2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L1wOotYYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NWlJsVHjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hyhnMSvoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fHgiCMyWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yUnHbbbzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ziq3UCWDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func elokwo2EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tzwie859Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3VlmBDG5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6kcArkYDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83vTiEfPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UfCSb4MHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k3FIB9d4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3QSBE0HmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p0iwyaVoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wjcr9vArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QPCAqP2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ixEhzUEjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r8uWSrCmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DziAGTp9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WSlFdundWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xV7rYfuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0q4BUU6BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QRmFo3xxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sWgDwkLSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jTlQDX3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vv27mEPdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1uVqvzXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JyF6RyoJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X0Jpq0m7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8IeUJwadWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lLoHfHAWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BQ5TEBV6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8V4XKakCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FLbATSeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oCF1N3e8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EwWULEH3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AhWBMV0LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qADZAJF3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hm698I6CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dCconLC5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cjGbu7qmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ahsx1rTKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2fYQ2zbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ImNrWUpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GGdGhsjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zVjafhbLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8qaKQkqcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JyLKjetcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uc3DiBdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kBHS6NoXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VFYy4DtFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f1DRaIDsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R2nDJzWeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9c8adPJFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0TIOr0j4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0kFcUY35Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1jDnSTjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbzvL9MOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YQBbcVtyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KPUGf21zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wbMrfNjCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ronl9iUIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C7vUPi8cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pLJEzEP8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ja22yWAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HtAqffTAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zm3S3wUAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEnulDdkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VsWFdVhjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ofeSGG9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func egzoKiRaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7dAPa49Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GuUiGLkIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gCS9SLhjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NgE3W9cwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fq7EqlG1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P2H8kvThWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E9z84u7EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HH0AnhvnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9hx0kbaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w4UoNI04Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T9uRAUIIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EGFO041yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m5Amnp7HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L9TWp1DWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cW61lWVXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p4oRxryCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l1SB9A5VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qinXLkmNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uMt1mC8pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2WgyIMwyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W4zjEoyXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7pGaFt5aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X1cH32YmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S7qjxn58Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swk7u02DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CywlCHqJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5KL3SpxOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x45ZrbR3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4ivMfZ2VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HtJDXS6OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func citow8h6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ptl6fNDQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C9tvuBlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2g00QrJ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3P8GbC5mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PHxHJPRaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yavNTBs0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTewBfqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXL6DatAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tCsWMa6cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3lwQQoBVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zLe57jUjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func btrxup96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5h51DZluWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B0zRxRWNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Wj2ONGRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zq0XTI98Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mvPJar9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z71CQok1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 58ecLpT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5WSvylNgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P48zHHRcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fyWyD5ECWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9RTpu8qSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XKFpJLbwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func es1KnOkGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e4H090M0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dseFhlQ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ao2guHETWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6dlv2zRHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkCjwylIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 18xZNVvrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 25ShD58sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2IxR73w0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q2UdPcxvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YmfRRTnsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yw1YpERvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7dGePP8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6NoAalb0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kdLhUSODWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7O6BMQFnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JesOKpaiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zYhUuFuyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rY49nKpIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fWNfqf9qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bQKai8x2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EucpcGk7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j7MznU5cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Zzy8pyrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DUm8kw5IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ndaJADtNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7OLODTZiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qn7eXCIwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GVWUE4GqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qDPX92iQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bla4HaSiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func coodBu0IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FoJ7ZSjcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1G1wpdcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jeOwMPQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PdppMPqTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CFquuxSdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1eRUTo9KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bSBBduFlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qbG4J2WNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OaAdYJIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j612cIAzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrLV9zwsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nRKLoxF2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WhgI550bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GP5qZiebWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRyi8U6GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhlPf1THWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bjqA0sycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yf81jkCGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3pWrD8YwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3dEgUr9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TL3l5UWRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sN4U7OjrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0I2agk8JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r0peKNRqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xYKYo3Q1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eqSqGPjhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d4Z5K4RGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GCK5CWnvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lxs4qOYUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I6nVIvMEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func liBoM5fMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nKp5VFmcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0n2IunqFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkIuVRbJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9FoC3Hw0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func we8Uw4mUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Py5YF4aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v83VgZhYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uh9pmurWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qdh5OBxeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bdW50gFrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r418yq3iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ho1NTInpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1UWOvEdHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bX0eSfYoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9z0JqEGcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ysv8GS4gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yYCG5OYDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rqqWjLUbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLHEqGW8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rBBtri79Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xtIIuXKvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ImnNa10cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RjMaTSdWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XafeaqSUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XYRgNU2EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vAkihTGbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4jEI7hpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 28BdtA3NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ecPTUGZFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kl71TlvNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16pRknHkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N9oW9fX3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TquzvQbOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tnOpIQ95Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Km3osI5MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gdnFb8GSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wy5r6S96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wiQc1o4CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymuxXSUMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func or9JxdzVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jszCYEjMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func csm4mtuxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x8UcueLwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AYkL9lUIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qidEqvcNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kl6hlXqaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dMykXkxJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5l0ZML7jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OOnQajNkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DRiG4MHOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SC2bTF7QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2X0rJiF8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vqCYdB5vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TQvzrricWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pT1x2QycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kv5YqDprWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f4BhW9PhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bOQ1D48JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vWGENIVQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rCaUIdevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X6yel5OcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ePotTm22Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VFulQokDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0492Om9HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SwMM1rPqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x6lmR3npWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Q773pNTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r4daxb3OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vvgOgFKJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9J6h6JkHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0WFo9mdMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dV3O21IXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BbuEE3NpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6wZPBXgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XIaHsGXYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1DDJvNxaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K6PRDNKAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q4J34qjEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KQQURLPfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fx97hiSLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNSoHUFFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TXQyoH6zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IlDmUwzHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R8U6cgz1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kAknVCIaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FfhO0YcJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yu0NYYptWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRSMSMQGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hlMNdJERWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lrHrA9cqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLlAjpnbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func roZ3IYkDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yJ2vUjrcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f4JALgCZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vp8XDmXJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XuwDmwn8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QhB6WMaPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WA88Pv9NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oPU4lyYhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZXmx1BIVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xk5Tca5OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gyxw5QTWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SuYtezjrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LPlOUVyDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7rSCtAA2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6SdMd1ILWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 40a4PrsbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eOxvgKDXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8LimywZZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5CzJyjNvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pG3qtB67Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GzHo9uvTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svYx7u2FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hTDK6SHrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bShhrxBfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PENv4YurWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymFQ5MIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iWHXo0ZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O5IkfujdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uZRbhBLEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NSuDZEPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UCTT826CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9DLlisdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cGACTfqOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ToYaMNgIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xTyyo3QZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lInNQYvAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqX6wFE1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z6d3JXXYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vtz76u3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GWvofWOhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I1uwivXwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rAfIds4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m9lSb38yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sn7OHX6yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwZGJqzXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WaeGtjleWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NO3DBkYqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1URHw9HsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eUWdZCSwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLwYEOFFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Xts9qBRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6lAnOyX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nd4MNEbDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pgf7vMIvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iEJbnlDoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Go3OFQ8FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TV27XpF9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hLEG445YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3mT5QaxNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F7nZzzhiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wFbBbN2RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fzRylHGXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OU1mRMQaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s50fGITQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GwmkXrShWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArYVK0yFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iOt59xO3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Dskojf5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jgP47cX1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TqAxC9bIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DU0ZKQU5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QN7ndmKzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pzuoyk5wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8S4qguipWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KQmEGS6HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RjyXxiZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gB01R5iSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vZAU1pFVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1LJDESDHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CZabS8w6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PHtqYeskWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqxjpWVTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J751n7WxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3IKJd6Y0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pAlwKEe7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VFrqFrx4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jy2DW3ejWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BrRejtlzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KbEi2WDUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YzBpPsHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9AoxD9IAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aPasEaYqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ls12IVd3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NFNKUmtqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 38ZaZRwIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ea1K9HQOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dUXD8J1hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func egCAKxBrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xyBlLqY6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f6Jp7bd1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l03xvzyjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vggIJG0CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7chkYydzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fdOxt3UVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hb7DbhyFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A9FWkNXpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1zJIItWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OLYd67MzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PXQ8VyIEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TTMFW0ViWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 75FkMCeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AyMbf2OhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UUvvPBspWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2SfqulEGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RvWbkyuGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CQH1BIU4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IZ4h9LDoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nTIArwSpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cw6YAFpgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iBTTOToqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G536MXlSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5GGJvOaJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGQS0xeOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1jU4YwH9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zVMG1qAvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dUyqcT7zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func igZ6r4srWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QW9ZL1WBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q57WxIN3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lx1CuqbCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jDKLNWTVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vlVPO4WcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yez2TH76Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 18rmjizIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hSSpVDCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tGlcrR6tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QEw8oTOwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrcEapAbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vJwH3nKqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v3yf7XjuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ExBuwGGWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TpOxnwIBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wUSLReZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e66hjSKxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dc3uGI4dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3OJtytV6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eZcduFHkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BMvtwfdbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uZzJFaxlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RTfJCGKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 36xnZnhxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oZfTSxAaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Gl8MViUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZHOlliyUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKP4o3eHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNyClUt0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3q3YRiYdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NJusgI2zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qL3ehk0bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vHk078VhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func algxrGqhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9iJhammzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gJQuBKMHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9UBlayAhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tAq0mDFPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6HUL7RbfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kY01aNPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j3UaIyjiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n7PPyFaWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yc58omsbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4xkvdk2qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5MKk2wdQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Glsx7NztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F6NAzOClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1R2RE8vKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WbP7kQarWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KJNpYuJPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0JJ0o5yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D1gkTMWAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Est6rb78Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvRu3sWgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g79qxegNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X66jnemaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QVnmcEE0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tkOG2ouQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IBzO3NP5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7CvzHvT5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xdCpbBTcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oaiw9mAgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y7ZOZW6PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func usetVDg5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lGE1XAvSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4d963z1WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f2in59zKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5avhKTl3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vm3pTZYlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pyZAFhFbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BNEammwSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QI9ysAdtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YLwjYwnLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func paT3jLKjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PiBHkcpaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8d8TpWkaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGEoepUnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bNobVlUOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3RiJupLFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OvYBapDMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func utExA0BmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cArsYmxtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 37guzTxlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 86d0Vzs4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkIk68HYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ob0s18X6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o69dOqszWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oEAe54WnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4hkltVbcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0E3MsFTPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DsCsDUeHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MwBq1iOaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gTffnaPmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bevdJw7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vWmlpxdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QCwGrBfVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zc3PkzJsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AczlSEhQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ok20tXI3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yaJKUpmlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uL5SPvbcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6QftnGVNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vwt41pM0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UR39DF8xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4ZIPF5VEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OTgyJK45Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ECaHe9YIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oAbVm20jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efqcK9oPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KYD4WFEZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ol8i49yYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f27VJJpHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JgO9eaW6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dEAtGjX6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j9QDAY20Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q7PhQfTRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Xner3jeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1TG4FaG6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ILxDR3gVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 99kja8PJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0sTf0xj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3RvxgJ1cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vPTTVeRlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MjCqs1jRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ii5OcGBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DqjPbPyzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G06vxaeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Aacd7dwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16y1arCrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FwHVkhepWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Vb53P10Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sn8JKJCpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xxrzlisIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mz1TPFarWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MQG7eN3ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RHIi8UWnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2U0GIW34Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D1Pl3nkTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HJq2dMdGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8T3R8rDPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iOZGw8oCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bo8qh7sQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ilg1MxzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LHXgiTq0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0hN3hj9RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 33Yf3oe1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o53C8s7yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8QSwK2KOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZiefGYVfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OYDgflHwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HO714QwXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A2Swn2BYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HqUmVq3GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XsvKuD8GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUtm5jIhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 65F2AMnpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QDgPwySyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qhL3rGLwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RKnDkOITWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XDSkx8nvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CPoNZpZyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LllifBSpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rWIQ4PX8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TmhX3WuHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZClUPjQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nk1xKeGzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vSEeFpuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T4nAkrQDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rWFdpTicWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1Q9a3DtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gJ0oYVDAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DZeEfiwvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ikOWstDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cadxUh8YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zOwdoIN6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WXD6mm0RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YKilubSaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fwVAJdgqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 56IPi4agWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jf9lQ8VkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tgklVislWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uE3CIHKXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4xwL3pLzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q28XwLpSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0qVjTeeNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gh14QFWFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g9oBUHB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JOxB9hFbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ShYzF8zMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PwVa7QjZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ei7lp3skWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MH60UMYeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SYD5lvFKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RHW5T74DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bpEkfcoJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2FOPRv7ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QCigvhvAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YtfNMZqOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u2U7IQWpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hR6OmvwDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 876lDgMRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q8Z2gBUBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nK6KJobzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gXTC8WhlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W3jEaAOwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SNmRvE29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M1x91jlvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VELPPgHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGL4LZUKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PbpX7XiiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xEkpknztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZWVUwjDRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6dIMTiiXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sfOwJwjjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2L1V7I6bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sUCaNQEFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bSH4bgYvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dhyN8jOAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uG2zmAMPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pZSn0fIUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l6H5CTGqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1e2MP3TlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CFVxTgZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pIsBKfZIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K3FZYyZTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P7uStSeuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hkmZXQDmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lIzZ8XOTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wDPht1c5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TvlmFDA6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Sq3K8ZZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cugapoEyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DhrnnvXrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YeWIzqLZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ZYey1RBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o8ZDsFWzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EWv7heZDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tKQnM9VeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tYaoS2KYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DIAHLg1LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xgKjzMe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jlrUtKcyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cUYbwaUvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RPXCSgzhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IQSUU1qEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func URVRy77KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S5MkQCFGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yNyrB17uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kpeo7ri9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T2XzgRS2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d5gVU4QrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I0JJKUbxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IEVoLYXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hiIg6ynIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FKuhSvAsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1FajDTqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4CiBS8f3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gVoyuZ4oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5nh4gZCtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JbGB3ynEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZPJ3VqbkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dOByyz9fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7unM0QY3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8UmZ5abRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MhkaZarFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z0c7fC8NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aRZii4IaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IZqdXgHqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DCJ5uDXUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vKk4wJSMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func om7Cv4stWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eRm45PjkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xM15uUkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func btwGD82AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ZnjTwkyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vpMU3x9IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E2V3ZDuGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lRUn9ihcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ThyryEghWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QjZ73m66Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8k17hVx9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gnj6rNHBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9mocALqwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Rl8C8yKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vc0qQn9HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7DV7NvYPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g8iAwz2CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 23wlnxcdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2XEYz4FtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UmYY48KhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bgIddt4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yteyb6t5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OojIuiLfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FC7dLzllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3TgAsmiAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKN9UMFJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O7emzPhpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wrv2GCDkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ff31PNpZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JX8YvYduWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TuH0f5HVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WO4ZZ7g0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W6ScJVopWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vLeEZ5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TEY9HXYWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 33ur2DhPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2l9ojk7YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BlSuEdixWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CuNCJ80wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NNuRBRGZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uidHjmgpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JbUewJfJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8jUfKdmZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xM9Eh1XwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ifimebaXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iAgTcUK3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uiNy6pfDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L80IF2rBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jIRtENAEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XIMsBk3oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F5wWANLvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wrHDzz0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sDtJtFVsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zqy0DS03Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5KlijstjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RaqH6ak1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cnxYC4KwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n86ZFKi7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QWX0MT5XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fNOgarD0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pUXmIQWtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kVp6XewDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywOJMjaTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lbZFKDUUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ImhMWf3iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 07htn6i6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UHSqyXnCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3OYWgL9MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eihCELg1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fQH5OcR3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LJUGxpMrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UxfHqyJTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H3PV22ihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VM5WjhxRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PulUV2XxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A9QMaR9sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QwPYeywgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9GEDv6JPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bnrliRtLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4EApvKswWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXi1AFnGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6JbVIII0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXQFG8KlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7AyruYEoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dlDaq4jQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8daQdoFCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9TCckcfmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Utul1Py9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IvTythyQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TH70yQniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fnpzwsmsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EG88IpxwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uRc7wDmGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHSzdSxbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5s4fOfVRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QK8E5fPnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OWSxTdYXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tGnoJriDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LgjIkyZkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0lgYzda4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eRzyJ9SKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TyCk8I9eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RvbhMwUsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLyLOJC6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TkLV1xW5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a3LWYxASWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Bv2anTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8XJRyzWEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4kCttX3kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gwlMhPuJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ifAfBlHTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YS0Cu3qKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PyZViakMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XUEQo6GKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dHLOIRZFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pLbW2GbHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iDWRn2ciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rGQspYC4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NEav1ePPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KHm7B1M4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yIW1GDedWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y9v1Qm6yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Scegy3tMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PgeJuk2PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D84OkBtyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HTD3KMTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DagIjMzfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E7lGSQFeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gFgZhjBvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c349WfZgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JFTS0vHqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zSVidRjbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wt7MYWwYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func enYbFeXvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0YkihxOAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gNeoOyccWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZW9uv71RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e4SH1aL9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTyvyb39Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oNXG3ohMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3wEPslk7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BfxhO1ZdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5eyuU7zEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VRTUGd8nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wOYYlAykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cB1DnmybWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jDQ8BxItWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cX2K2AzlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YjsJTWxEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZAt0gXooWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SXuLfxOaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func od46xtn4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j4RYmr6jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3URB2Mr5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JVZNzPtQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqnlnBLtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JosPlGxZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ry0gPSBHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FcwU1sG6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zvnh8zYAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NELElqsQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UQfnoMdTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pDJXRQUoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CiEsME7uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tiRbJH4IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zMMXprLoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W4ABVVIEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func inREk0XTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NC7MBevHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cWMvkgqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cX8uIpvxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FRJcV9LaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nqm9mXcsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cyE7UOlIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dm43qrmjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZecLYVytWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7XhceJq6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ERU9eqiTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hs2zqj1mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HcQoRtnqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dsAOg7PqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C0T6q7MOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svdIXWTbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ob1DkSIXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PU9RjpMjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vxgy4MoPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1LxKJlwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jBOI2cBzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 68xUCBHOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UapcPAxdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vljVxN8aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gVwUvDAGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ap2vvc3oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kl7IggusWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EWGfOjgfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RfXztlmdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3C5dY6cFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gQpPMIgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tDMhvT2pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G2x3heuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zhuzznp3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 49UBHexOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7n7zB6hmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4uarGfcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vCojHV57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s0KAiFg4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R9jbNHniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kj2JwCqEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LxxSmNGhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wk2nHpErWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W5wP7B76Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ORcEfYNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yfIcsLJJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GIKcSPb0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LLeUtfDFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CQE8ojIoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TCa64t5LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0UZYZiL1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DMn9U8kkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xtMNJNvjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aPA0hw2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xoQZBar1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1QAf1AjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ajEVsi8hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nv0mkmhYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CVT9g7w7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W8Cs379rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func opcy9XukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXyjOaK1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kVS3uFxoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9JFVqYXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xgnTirjIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kdyoOPWPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cPetbWAuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fk58JkBkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QyEE3svXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QbwWatFeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func baVbrbFbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UegvfxeEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GQ6kF83jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 94bPQYF6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6aGmh6QtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fp5UxfAfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 35EkYcVUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JD8KAGZ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nBlkLTuYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O9Of3EE8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2J3FHtgmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u5GMAmcoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wq6urCbHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e7OIDvyvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d75ekdmHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lAVtcpVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xDJu2fWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymgpXxjEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3sMDig3JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vaZHxkmKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DJV9wl7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G33twEowWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMV4cep2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RXZtKZykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S3gkwmJ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0kwV9z4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MwjSD08vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6M7i5bgYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z798R1X3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hmxOaFaPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VALdCLxxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jkSAiw9OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PtlwinPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CWFjoA0yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vM3pPyT7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iDGyyVGnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EFePyvi1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhbG3UtyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gBSn8WdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9MwbNxWJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o5t9yK0uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cFxxvQ2mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S3IaZ7A2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QVURWYKrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Uz8Q2jRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LcQ3J1J0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hTqeNiPhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LEv29wlgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LR7yjm3RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTmdsBbaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HwBkA2TLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ye4TAP81Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IHEmU7KSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Ziq1Tf7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3cykeAgOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lWmjx3KRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZcWXhvZJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TTb8JcQHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O2kob2sqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qOQ2WgmjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3UhOySw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JphBcD1TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zlRYxLVTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eA9mb6kDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZvUnwduGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UDJQKGiIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g1MK8b5eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func flPn1B4UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pQ69SunyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NDGchmUAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6lqz1M1JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oJ7233GLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6RC8gD3cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1sPOKv3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PkRWZO60Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AttTMR3tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0G9ZbDe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2DuQey69Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nc62t3d0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tl64vgcFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rNC45VKhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XZsR0kJdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLUay7jpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rscmdf3mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hhq0KKUmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wipqMR5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XMHH3HKkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vV3AoSIuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h2rd3U1xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gwDnTtcRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rmhm0DCMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QaHeLQyuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UxWhphzJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Br3vi51qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Urk0TGoCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zUe1IUPFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tYcBoiCWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wwLORcPxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 70lw4XzeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nrMJcpEaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r4gjkAHfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w9RpZ1QqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W8ma3okcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DSVFRs0iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yg6BAs23Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBmoK5QWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U5ynllBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZuNu6XUrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sml2Eeu9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bs2JxKnhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mPnwOWoeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ijXGDJOGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zjpv4kFSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JUY9gfCKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XbYaeqQZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func it866nRrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPjOOr7pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yIYQVrt2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1opmoEy5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1oGFGA0UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func spgrQ91YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JMA5x7AnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1KPSIgqXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e9LGE7V2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vYI3GakeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OO4UxWjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sfgHk7SKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywpbpfllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UeTgVvwtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBrMaqyuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 051WCOKGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 89re3rbjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3qJhKBQDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FFOOCqdZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AQpF4FJKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uzw4W57FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yt6uVc3DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 62Mcd8cwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lSC5rXNZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IR1xLDY4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LiBjwym1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7FdQjndlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 00jybf0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gpm3g9KCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CHt9VD09Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5KiJ7rDhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYV7ZEdxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CLlIQeCkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yW0qoKi3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A15eA5kQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QADIVVXeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pIuDDWIHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fcLaGWRvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CAmgjL6WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Lv4VOHkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nLV8eDlGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pQtzqMUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tW2NasldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EZgvcCihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q73tHuV1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qIGamOUWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cd14MrrUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8rEWUyj2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sioz10AbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kmqxifphWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NjduMfEWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PDWDVooNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rDbSdMyZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mMcaLVJrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yZkBPjXUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5VUeTwaZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VXzsydp4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5r73Lms7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CUuhDqgYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func opEu0bvfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iDHogDG4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wi1a7xSVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I8bc6xsfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aFpYZxiuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XQP5vEstWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dtv1tGUYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zY0OgBEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8d3NdpBVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iN68Ho2AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tf8ryTO5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxW2lbkTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DTFMceUPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6KUaAOFdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fYNvvn13Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8I0YxvYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lxqz4BXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4QbrsVuNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KePYqdQ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TdCPCLzYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 06Fd5cGyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TaADxJRiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2PszORMKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lh9YYGy4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g9AVaQw4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c2ekP5QIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qhq3sMkXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9GIOdhUNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bWIWJqN0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FJQgx4Z6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LwlY9wGgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WzANuUXDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08257mGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WFITipU5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t0vb6tsKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OjTG2TBSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c7tmp365Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V9R1r5KGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KuWCS1wwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QHRNHv3oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6IWoqZZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bocaMHKIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EIlh58NeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XwuVCFTnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func buRmtK51Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Di2VaRtlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6rdJFZ0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3X9691qUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G8h3aIXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AaPXJcpMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JnxxaN3bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FSVtw2kuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MOTgAmIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lu2rXdnYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VSaMBbdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fJkFb5Q8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dM4B52QzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MLCaCXA4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cMCSqcZtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZK8vfxsjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ZvVy9MvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HJ2Dt8MwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kTz6OcyUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o05sdBywWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rZaMFyoVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywpJ68RcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W9I1swDkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NcXud9HcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ckx0zeGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jn9JSkDcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R2HVQxyNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TKmzZlooWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UXyTmB02Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fb7hvXPeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wyQDCAe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uu46FYX4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4PbMdjOIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IK0kzLqxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swQiNW42Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aoJb9spaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BVDd4Nv6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R42qblSfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JHZp0I05Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QDTAtCXGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lDcdiluqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z35RYxzDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LFiASuTRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D06uqyOkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCAD43CHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0IRXvo6LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YeZOTNcCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9siTKvyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zU8p0GwBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6keByf2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tWkYfIHcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4rf8IEJKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vuiBNAJJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y7oekc5lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vkFOxldVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BDE71yz9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c6YHPfgiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nx4ef33CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0QGWBZd6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iJ0mg0dNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YgjLpC1kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fbwtLVDeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BOPTWCClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func frMyEszeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oKjNP9ovWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EfUC4qZAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n5LDyQ1oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func maTs44agWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bMQhzDenWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lZuJrxiSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5HJPNhElWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zmkef8uiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y40L5sL6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxJZfkMJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TM8jZrEgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WxihOKzVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k0os9miHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ION3DzZHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func coZHQ9XuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqpUyVWmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ufNQGacSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0e8xQCyPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oETpFxovWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 22ErgS3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pSOsOXMbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yqbo24KaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mHxm0McIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jy6PH7bBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func heV0AmjsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1QWuDiANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RgWA3UerWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CKB8g1OvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7iNP7lHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t3vQmppFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E69euyAuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GfUNlCdHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EYYqWU4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s2JIb3aPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rfLsFlTRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3bL86zenWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PERZEQaeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Xltn5WyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MfzrZN9rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D589thFRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1z4UsSbIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JRYXJCeiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gClmOxwaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1XV19XurWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DgvGIp9LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RLjslRXxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vz0vKsK7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dqlFXDFQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jdOPTgo1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SqnQA4caWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qb5tuivdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func itHV0i6YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MOmrNXt6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vpHWuryWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WrgRvWSeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HwPPlGjkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zE29ul73Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X6MxHODPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Egy0jyXBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ClLhMBgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pqxY8IldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sW5riGc5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nuwVq693Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func idWvUcrbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DUHqCgqaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6AGW6B5dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uDPXjdJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QQrkX03pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WgDP1vQOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YcyIIVZvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5I2q34HMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qC7YzxIbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kbZa6nOWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gwPUa76TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZGUbF43Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func djarumD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EhAr9AZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3dKd4dtjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N7PYLgxPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ZTE3SCZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XbN2460BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9FpDxqu0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LebxURSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GJcFIUnOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6hjbpvQjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rZlgym3BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16toJanKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjdoneLoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EnUM6RjjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymu2kh4yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zKTpWUOuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kYTYUu6uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yBf5yz6ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rArwaKelWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RQ5TEvjrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4iWnuLrKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IO8IKYRrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPaNTP5SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pnKbbQRVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5XbF5lXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ixECh4gDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WsVfcFyfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fBaWQkBpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sn9YSzRDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZmGXS4fQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HroIN3X5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wjv9Kv3cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBGZGWHsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sO5cOatyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RsfBI1J1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OnaHbXZ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oGHP1CvaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hu1eSIHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L4sSoYTgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pqCIJcpWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func czpwnT7UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPgJvOCnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KJebL6W0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwNzuWaPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hvQBo0D0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eJD5HFRoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iqKCZ4g4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yzVWq99SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KnRbVg27Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zzViY5eSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9cip48KFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0G4AwEBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NUYY1xlQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TLGhn0XEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func buPFZWTMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9BEWEeczWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 22HWdUPHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func as5pqU9HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PhfBlQHVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mFpvrYJiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8dFl40JxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zC2P8aSzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ibIjhKoFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uwFjcYc1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func un0zQ0daWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pvT9ZFFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lGBaJyuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dblejiD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cKRVGWaWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H3jTqdPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WwW6NKsfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CLQ81PmnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sGa866LIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiiGBGvXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FAmbip1AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DXaf4TlWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fiG6mNJZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jRrExMX4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c6C8XqiSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwhcbthJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sXKFHGttWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fa5ga5unWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d5LMBOQlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1kaVNHHFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Oc1rzcjaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CjlPzhIPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UASav3AMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8cbvNWk3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lsqfoAIUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PMTwueCfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lgzlTwKvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4UcXMO8HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iRwCH9o4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XN9rsBhRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NxUtr9dzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ypymJByTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CUzHf73CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X6avICQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4zLqjfnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3jlJ8lGyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ckXbvw6NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rdLf8SBlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ya8OH0oBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aFpq2eeAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 44feNelkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WoQNcb8eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FKS0LroQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pbaE9041Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ECjJBRQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FoOBuDSdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jLDmtnXlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AJuIdL9DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LqCUO9S5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VDf5M4ScWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ru9VdJNIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cgfar8WlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GulXHRh4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OqmMDZZKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2wRbM3NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sjwXlnxwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CxORSrMKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1JGvLlIjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4V9vddpzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GeOsJFxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eoXKMwf5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FlzogqjuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7rytT1kfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IKQq6HIiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoUaPBgCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cOkpVwPYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0AvyK6QOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aGXs6vaZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F9VW6eGHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WuNIRwP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oTSE0PpiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9EdE8O6qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6oYRrFgcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qSGe4iRIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TnK9PTNCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5tDRJhVPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WsJJEvX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yu2PTEODWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iAHMpY46Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8l86nkrTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ysJqhvHKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QhPtL2P5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O5UWOp71Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qBTOxjUbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 808HhDnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UsDTGBZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UjS4zl0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8iWZF5EkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YdCudBBlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V1uUL5f0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jnngjEdGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0N7nI1oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cR5GDVeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RiL5gh1jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VJCcDQ2NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wnrdfoHLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x3kHDlTFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Njyt5z7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rF37AzehWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9IosW4IrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jot15SuJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OPcq7SgQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CjW6JHNJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func urJBjWSaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xTjaylnFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c1TLS46kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NareCMpjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xdEwhobkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 74tw8LXdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dP6gO47sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func toC5mg5EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXwEJBkvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rlgGXlmWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dCQsZqcQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0Ecoqn6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func saGVmVB8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7uqoUytNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c5GtNZevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EThsquicWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x7YGQFMIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GwDVffKCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FeCHj07GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Krap2mr9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9WyhPb5WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3z3BJccWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rLPozZ79Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pd6OXLmTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hiUEaL7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v8qqiBygWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 80a2kHsqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WedmluKAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2hrJO7BlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6uIPArsVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lvoYRSKXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YATmZQBHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YP1p5AlxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xqUgDySOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func haF0DbIoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ybZF3GLlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pVvGOUE4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 22guti97Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UZenInj0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x1LEvTzmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pWVHUkcfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h6ij3t8lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nlshrQtjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bfBfuLlWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lrPxwrCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uIWU4UYBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cqaYEI4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OdBj87l5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V4IwbELKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XRk2RTbzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uesv6e1RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tJ03nRAMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JTotFO8dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x08aQ5BxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywzVIsBsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2uwtAakFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pMWcuHcgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HIWG4HPpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VPzt72VuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pqOd9oaxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 435OOVFJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func npwOr0rJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func beewjr6KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6iMyVdniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7JLP5ljmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EdXUBXCuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KGjwWoFsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o06jvatbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LObXRN26Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hHJ7ZtTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3rlzstF6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uQ1OM35fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lwTR9mEEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FQ9ev4goWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ye4eHROMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swyUDXC3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wv4OHu7bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JRJtrqnCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmWtNSKgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uZLh0LrgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZS9DAvnnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7QYCbahTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4h1nEinoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PjbN75ikWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHwVKP1sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func APSKZEngWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vU9YpG8FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sjArtCLFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j5C5TlOiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OlplDcgjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W1MSEUr3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kuG7SmB5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O9Pb5dMlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ElvcWJsHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prr2INdjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 52n68yw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tsCt8JGAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zbABtkyoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yqMAGYjEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AGDkVtAEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vkQZkFTDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func acFSuvHtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qOpBtjFuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2J1GpG3yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PvEs2GZAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LDT3gw3zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Z29mrXhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMSASSR9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OKMZBE2mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H1zi6N3wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8yhaX3giWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FOcLlV6AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s1IFuJkIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtjDnAR0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func phk9SAeGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0N80npwfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tidAV5WCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I6My51a3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2D20QACvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0VKnWZ2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jHfvTTe1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mgAO9W2yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ieQCE7OpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tdQ9UiyWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5BrdvZO8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VV3tfEwrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivmRiboKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1r156wx0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OsufG6FOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xu0vH7E0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hn2ZqMQhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q4V9qg8TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7FTaAryfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0xbzNRbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pZSms2meWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4PTstkNoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dncnKHLeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l6cStM1tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KdSTmOPgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uTsW90JCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vkqjlm2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E41TsZiNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d8dZdXHQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jtQP1kQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ex0CpORrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c08LXpYiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QJCpsldzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1nds6XfDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mu70lBEmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cB6qMtZ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGYnEBdKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N5k6Ed74Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0ybGRYwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7mQHf18Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oZByYZzyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o64qvXbzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZTQSaClVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N8ngIePjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PgrzISGjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7rGaMcogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P1Qojd2JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOUjHT5KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func khEGfjoRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vzxCSvZSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n4vkFekgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tQxh6gHsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tdHDT1cjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X2MPraf8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WSRDXLtRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7TFpIlyiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EXDrDU8tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2pxfumsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RnlL0F5zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0BtkCoNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dH1hiSewWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OjWB9Zk5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qhDpwZtcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZnJsPq4UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tHE2NN0WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKtHY4GdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aSssCpbCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g7rvSX7FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F2d0phtAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VvcqQJvVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 34Xb8Hp8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lhJLUjARWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func frU6fwzsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6xckkyFJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F0J3qeCxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SS3J7PO5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0I7fFgaBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WAj5Ra11Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ap2eZ2tMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ErYYZviWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VEeRvZFZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rz8ot0TyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cuANw2lyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iBik6EIRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

