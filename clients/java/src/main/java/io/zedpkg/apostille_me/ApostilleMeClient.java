package io.zedpkg.apostille_me;
import java.net.URI;
public record ApostilleMeClient(URI baseUrl, String bearerToken) {
  public boolean health() { return baseUrl != null; }
}
