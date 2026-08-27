defmodule ApostilleMeClient.MixProject do
  use Mix.Project
  def project, do: [app: :apostille_me_client, version: "0.1.0", elixir: "~> 1.15"]
  def application, do: [extra_applications: [:logger]]
end
