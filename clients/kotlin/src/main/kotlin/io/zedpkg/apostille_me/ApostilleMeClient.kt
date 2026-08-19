package io.zedpkg.apostille_me
import java.net.URI
data class ApostilleMeClient(val baseUrl: URI, val bearerToken: String? = null) {
  suspend fun health(): Boolean = baseUrl.toString().isNotEmpty()
}
