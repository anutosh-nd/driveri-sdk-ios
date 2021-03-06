//[Netradyne Driveri SDK](../index.md)/[com.netradyne.driverisdk.eventAccess](index.md)



# Package com.netradyne.driverisdk.eventAccess  


## Types  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI///PointingToDeclaration/"></a>[NDEventAccessAPI](-n-d-event-access-a-p-i/index.md)| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI///PointingToDeclaration/"></a>[common]  <br>Content  <br>class [NDEventAccessAPI](-n-d-event-access-a-p-i/index.md) : NDApi  <br>More info  <br>Core interface for managing event access requests.  <br><br><br>
| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessRequest///PointingToDeclaration/"></a>[NDEventAccessRequest](-n-d-event-access-request/index.md)| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessRequest///PointingToDeclaration/"></a>[common]  <br>Content  <br>data class [NDEventAccessRequest](-n-d-event-access-request/index.md)(**requestId**: [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html), **createdAt**: [Long](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-long/index.html), **requestStartTime**: [Long](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-long/index.html), **requestEndTime**: [Long](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-long/index.html), **status**: [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html), **noOfVideosRequested**: [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html), **noOfVideosNotAvailable**: [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html))  <br>More info  <br>NDEventAccessRequest represents videos requested from device.  <br><br><br>
| <a name="com.netradyne.driverisdk.eventAccess/NDVideoData///PointingToDeclaration/"></a>[NDVideoData](-n-d-video-data/index.md)| <a name="com.netradyne.driverisdk.eventAccess/NDVideoData///PointingToDeclaration/"></a>[common]  <br>Content  <br>data class [NDVideoData](-n-d-video-data/index.md)(**latlong**: [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)?, **videoAvailableOnDevice**: [NDVideo](../com.netradyne.driverisdk.video/-n-d-video/index.md)?, **deletedVideo**: [NDVideo](../com.netradyne.driverisdk.video/-n-d-video/index.md)?, **vehicleNumber**: [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)?, **endLatLong**: [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)?, **maxSpeed**: [Double](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-double/index.html)?, **minSpeed**: [Double](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-double/index.html)?)  <br>More info  <br>Represents video metadata of a single minute on Driveri.  <br><br><br>

