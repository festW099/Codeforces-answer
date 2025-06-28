fun main() {
    val n = readLine()!!.toInt()
    val sp_r = readLine()!!.split(" ").map { it.toInt() }
    val sp = sp_r.toSet().toList()
    
    if (sp.size < 3) {
        println("-1 -1 -1")
        return
    }
    
    val sortedSp = sp.sorted()
    val mn = sortedSp.minOrNull()!!
    val mx = sortedSp.maxOrNull()!!
    val middle = sortedSp[1]
    
    println("${sp_r.indexOf(mn) + 1} ${sp_r.indexOf(middle) + 1} ${sp_r.indexOf(mx) + 1}")
}