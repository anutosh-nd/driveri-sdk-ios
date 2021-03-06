//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.eventAccess](../index.md)/[NDEventAccessAPI](index.md)/[getAssociatedVideos](get-associated-videos.md)



# getAssociatedVideos  
[common]  
Content  
fun [getAssociatedVideos](get-associated-videos.md)(videoCatalogId: [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [List](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-list/index.html)<[NDVideo](../../com.netradyne.driverisdk.video/-n-d-video/index.md)>?) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  
More info  


Get videos associated with an outward video. Video list fetched from Driveri using [getVideoListFromDriveriForInterval](get-video-list-from-driveri-for-interval.md) returns outward video paths only. Use this API to fetch associated inward, left and right videos.



## Parameters  
  
common  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI/getAssociatedVideos/#kotlin.Int#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.collections.List[com.netradyne.driverisdk.video.NDVideo]?,kotlin.Unit]/PointingToDeclaration/"></a>videoCatalogId| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI/getAssociatedVideos/#kotlin.Int#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.collections.List[com.netradyne.driverisdk.video.NDVideo]?,kotlin.Unit]/PointingToDeclaration/"></a><br><br>Catalog id of the outward video NDVideo.videoCatalogId<br><br>
| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI/getAssociatedVideos/#kotlin.Int#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.collections.List[com.netradyne.driverisdk.video.NDVideo]?,kotlin.Unit]/PointingToDeclaration/"></a>callback| <a name="com.netradyne.driverisdk.eventAccess/NDEventAccessAPI/getAssociatedVideos/#kotlin.Int#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.collections.List[com.netradyne.driverisdk.video.NDVideo]?,kotlin.Unit]/PointingToDeclaration/"></a>
  
  



