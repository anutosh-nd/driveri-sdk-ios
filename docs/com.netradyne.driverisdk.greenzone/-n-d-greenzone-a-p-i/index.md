//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.greenzone](../index.md)/[NDGreenzoneAPI](index.md)



# NDGreenzoneAPI  
 [common] class [NDGreenzoneAPI](index.md) : NDApi

Core interface for fetching greenzone stats.Obtain an instance by calling DriveriSDK getGreenzoneAPI.



Use [cancel](cancel.md) when the corresponding lifecycle-aware component or view is destroyed to cancel any ongoing network calls.

   


## Functions  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/cancel/#/PointingToDeclaration/"></a>[cancel](cancel.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/cancel/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open override fun [cancel](cancel.md)()  <br><br><br>
| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[common]  <br>Content  <br>open operator fun [equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(other: [Any](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-any/index.html)?): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)  <br><br><br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/getDriverScoreLeaderboard/#com.netradyne.driverisdk.greenzone.NDStatsInterval#kotlin.Long#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.greenzone.NDLeaderboard?,kotlin.Unit]/PointingToDeclaration/"></a>[getDriverScoreLeaderboard](get-driver-score-leaderboard.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/getDriverScoreLeaderboard/#com.netradyne.driverisdk.greenzone.NDStatsInterval#kotlin.Long#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.greenzone.NDLeaderboard?,kotlin.Unit]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [getDriverScoreLeaderboard](get-driver-score-leaderboard.md)(interval: [NDStatsInterval](../-n-d-stats-interval/index.md), startTime: [Long](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-long/index.html), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [NDLeaderboard](../-n-d-leaderboard/index.md)?) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  <br><br><br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/getGreenzoneStats/#com.netradyne.driverisdk.greenzone.NDStatsInterval#kotlin.Long#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.greenzone.NDGreenzoneStats?,kotlin.Unit]/PointingToDeclaration/"></a>[getGreenzoneStats](get-greenzone-stats.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneAPI/getGreenzoneStats/#com.netradyne.driverisdk.greenzone.NDStatsInterval#kotlin.Long#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.greenzone.NDGreenzoneStats?,kotlin.Unit]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [getGreenzoneStats](get-greenzone-stats.md)(interval: [NDStatsInterval](../-n-d-stats-interval/index.md), startTime: [Long](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-long/index.html), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [NDGreenzoneStats](../-n-d-greenzone-stats/index.md)?) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  <br><br><br>
| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)  <br><br><br>
| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)  <br><br><br>

