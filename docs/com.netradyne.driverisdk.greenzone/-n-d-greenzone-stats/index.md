//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.greenzone](../index.md)/[NDGreenzoneStats](index.md)



# NDGreenzoneStats  
 [common] class [NDGreenzoneStats](index.md)

This class represents greenzone statistics of a driver for a given time period

   


## Constructors  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/NDGreenzoneStats/#/PointingToDeclaration/"></a>[NDGreenzoneStats](-n-d-greenzone-stats.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/NDGreenzoneStats/#/PointingToDeclaration/"></a> [common] fun [NDGreenzoneStats](-n-d-greenzone-stats.md)()   <br>


## Functions  
  
|  Name|  Summary| 
|---|---|
| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[common]  <br>Content  <br>open operator fun [equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(other: [Any](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-any/index.html)?): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)  <br><br><br>
| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)  <br><br><br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/toJSONString/#/PointingToDeclaration/"></a>[toJSONString](to-j-s-o-n-string.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/toJSONString/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [toJSONString](to-j-s-o-n-string.md)(): [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)  <br>More info  <br>Get a JSON string representation of an instance of [NDGreenzoneStats](index.md)  <br><br><br>
| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)  <br><br><br>


## Properties  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/driverScore/#/PointingToDeclaration/"></a>[driverScore](driver-score.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/driverScore/#/PointingToDeclaration/"></a> [common] val [driverScore](driver-score.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Driver's greenzone score   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/drivingStats/#/PointingToDeclaration/"></a>[drivingStats](driving-stats.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/drivingStats/#/PointingToDeclaration/"></a> [common] val [drivingStats](driving-stats.md): [List](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-list/index.html)<[DrivingStats](../-driving-stats/index.md)>?List of driving stats such as total minutes analyzed, total alerts generated, green minutes, etc.   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/fleetGoalScore/#/PointingToDeclaration/"></a>[fleetGoalScore](fleet-goal-score.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/fleetGoalScore/#/PointingToDeclaration/"></a> [common] val [fleetGoalScore](fleet-goal-score.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Goal set by SafetyManager for all drivers in the fleet   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/fleetScore/#/PointingToDeclaration/"></a>[fleetScore](fleet-score.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/fleetScore/#/PointingToDeclaration/"></a> [common] val [fleetScore](fleet-score.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Average greenzone score of all drivers in the fleet   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/hasDriven/#/PointingToDeclaration/"></a>[hasDriven](has-driven.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/hasDriven/#/PointingToDeclaration/"></a> [common] val [hasDriven](has-driven.md): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)If driver has driven during the requested time period.   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/highImpactEvents/#/PointingToDeclaration/"></a>[highImpactEvents](high-impact-events.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/highImpactEvents/#/PointingToDeclaration/"></a> [common] val [highImpactEvents](high-impact-events.md): [List](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-list/index.html)<[HighImpactEvent](../-high-impact-event/index.md)>List of events which had most negative impact on driver's greenzone score.   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/maxScore/#/PointingToDeclaration/"></a>[maxScore](max-score.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/maxScore/#/PointingToDeclaration/"></a> [common] val [maxScore](max-score.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Maximum greenzone score that can be generated by ND Greenzone algorithm.   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/poorPerformanceThreshold/#/PointingToDeclaration/"></a>[poorPerformanceThreshold](poor-performance-threshold.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/poorPerformanceThreshold/#/PointingToDeclaration/"></a> [common] val [poorPerformanceThreshold](poor-performance-threshold.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Greenzone score set as poor performance threshold by SafetyManager.   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/potentialScore/#/PointingToDeclaration/"></a>[potentialScore](potential-score.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/potentialScore/#/PointingToDeclaration/"></a> [common] val [potentialScore](potential-score.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)?Driver's potential greenzone score if [highImpactEvents](high-impact-events.md) were avoided   <br>
| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/topPerformanceThreshold/#/PointingToDeclaration/"></a>[topPerformanceThreshold](top-performance-threshold.md)| <a name="com.netradyne.driverisdk.greenzone/NDGreenzoneStats/topPerformanceThreshold/#/PointingToDeclaration/"></a> [common] val [topPerformanceThreshold](top-performance-threshold.md): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)Greenzone score set as top performance threshold by SafetyManager.   <br>

