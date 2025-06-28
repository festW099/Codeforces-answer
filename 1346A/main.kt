fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (n, k) = readLine()!!.split(" ").map { it.toInt() }
        val x = n.toDouble() / (1 + k + k * k + k * k * k)
        println("${x.toInt()} ${(x * k).toInt()} ${(x * k * k).toInt()} ${(x * k * k * k).toInt()}")
    }
}