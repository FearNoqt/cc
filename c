local GUI = Instance.new("ScreenGui")
local Container = Instance.new("Frame")
local Line = Instance.new("Frame")
local label = Instance.new("TextLabel")
local Tabs = Instance.new("Frame")
local Main = Instance.new("Frame")
local Antifling = Instance.new("TextButton")
local fccolor = Instance.new("Frame")
local AntiAnvil = Instance.new("TextButton")
local fccolor2 = Instance.new("Frame")
local FakeAccs = Instance.new("TextButton")
local fccolor3 = Instance.new("Frame")
local AntiSpinner = Instance.new("TextButton")
local fccolor4 = Instance.new("Frame")
local fling = Instance.new("TextBox")
local AntiRagdoll = Instance.new("TextButton")
local fccolor5 = Instance.new("Frame")
local HackMovement = Instance.new("TextButton")
local fccolor6 = Instance.new("Frame")
local loopfling = Instance.new("TextBox")
local flingv2 = Instance.new("TextBox")
local loopflingv2 = Instance.new("TextBox")
local ClearLoop = Instance.new("TextButton")
local AntiVoid = Instance.new("TextButton")
local fccolor7 = Instance.new("Frame")
local FlingAura = Instance.new("TextButton")
local fccolor8 = Instance.new("Frame")
local AutoRespawn = Instance.new("TextButton")
local fccolor9 = Instance.new("Frame")
local Hiddenv2 = Instance.new("TextButton")
local fccolor10 = Instance.new("Frame")
local AntiVelocity = Instance.new("TextButton")
local fccolor1 = Instance.new("Frame")
local Tools = Instance.new("Frame")
local AnvilOrbit = Instance.new("TextButton")
local fccolor11 = Instance.new("Frame")
local anvilkill = Instance.new("TextBox")
local AntiAnvilBreak = Instance.new("TextButton")
local fccolor12 = Instance.new("Frame")
local AutoThrow = Instance.new("TextButton")
local fccolor14 = Instance.new("Frame")
local orbitheight = Instance.new("TextBox")
local orbitradius = Instance.new("TextBox")
local orbitspeed = Instance.new("TextBox")
local LowPP = Instance.new("TextButton")
local fccolor15 = Instance.new("Frame")
local AnvilDrone = Instance.new("TextButton")
local fccolor13 = Instance.new("Frame")
local Global = Instance.new("Frame")
local LagServer = Instance.new("TextButton")
local fccolor16 = Instance.new("Frame")
local Misc = Instance.new("Frame")
local Keybinds = Instance.new("Frame")
local GlobalB = Instance.new("TextButton")
local KeybindsB = Instance.new("TextButton")
local MainB = Instance.new("TextButton")
local MiscB = Instance.new("TextButton")
local ToolsB = Instance.new("TextButton")
local Profile = Instance.new("Frame")
local ProfileImage = Instance.new("ImageLabel")
local Playername = Instance.new("TextLabel")
local Displayname = Instance.new("TextLabel")
local AnvilKill = Instance.new("TextButton")
local flingprofile = Instance.new("TextButton")
local flingv2profile = Instance.new("TextButton")

GUI.Name = "GUI"
GUI.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
GUI.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Container.Name = "Container"
Container.Parent = GUI
Container.Active = true
Container.BackgroundColor3 = Color3.fromRGB(17, 17, 17)
Container.BackgroundTransparency = 0.200
Container.BorderColor3 = Color3.fromRGB(0, 0, 0)
Container.BorderSizePixel = 0
Container.Position = UDim2.new(0.112696439, 0, 0.412030578, 0)
Container.Size = UDim2.new(0, 380, 0, 27)

Line.Name = "Line"
Line.Parent = Container
Line.BackgroundColor3 = Color3.fromRGB(255, 0, 0)
Line.BorderColor3 = Color3.fromRGB(0, 0, 0)
Line.BorderSizePixel = 0
Line.Position = UDim2.new(0, 0, 1, 0)
Line.Size = UDim2.new(0, 380, 0, 2)

label.Name = "label"
label.Parent = Container
label.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
label.BackgroundTransparency = 1.000
label.BorderColor3 = Color3.fromRGB(0, 0, 0)
label.BorderSizePixel = 0
label.Size = UDim2.new(0, 340, 0, 27)
label.Font = Enum.Font.SourceSans
label.Text = "Made by Kai (Nezuurr) | Version. 1"
label.TextColor3 = Color3.fromRGB(208, 208, 208)
label.TextScaled = true
label.TextSize = 25.000
label.TextWrapped = true
label.TextXAlignment = Enum.TextXAlignment.Left

Tabs.Name = "Tabs"
Tabs.Parent = Container
Tabs.BackgroundColor3 = Color3.fromRGB(17, 17, 17)
Tabs.BackgroundTransparency = 1.000
Tabs.BorderColor3 = Color3.fromRGB(0, 0, 0)
Tabs.BorderSizePixel = 0
Tabs.Position = UDim2.new(0, 0, 1.07407403, 0)
Tabs.Size = UDim2.new(0, 380, 0, 240)

Main.Name = "Main"
Main.Parent = Tabs
Main.BackgroundColor3 = Color3.fromRGB(16, 16, 16)
Main.BackgroundTransparency = 0.200
Main.BorderColor3 = Color3.fromRGB(0, 0, 0)
Main.BorderSizePixel = 0
Main.Size = UDim2.new(0, 380, 0, 240)

Antifling.Name = "Antifling"
Antifling.Parent = Main
Antifling.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Antifling.BorderColor3 = Color3.fromRGB(0, 0, 0)
Antifling.BorderSizePixel = 0
Antifling.Position = UDim2.new(0.0210526325, 0, 0.0458333343, 0)
Antifling.Size = UDim2.new(0, 84, 0, 25)
Antifling.Font = Enum.Font.SourceSans
Antifling.Text = "AntiFIing"
Antifling.TextColor3 = Color3.fromRGB(255, 255, 255)
Antifling.TextScaled = true
Antifling.TextSize = 14.000
Antifling.TextWrapped = true

fccolor.Name = "fccolor"
fccolor.Parent = Antifling
fccolor.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor.BorderSizePixel = 0
fccolor.Position = UDim2.new(0, 0, 1, 0)
fccolor.Size = UDim2.new(0, 84, 0, 2)

AntiAnvil.Name = "AntiAnvil"
AntiAnvil.Parent = Main
AntiAnvil.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiAnvil.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiAnvil.BorderSizePixel = 0
AntiAnvil.Position = UDim2.new(0.513000011, 0, 0.0460000001, 0)
AntiAnvil.Size = UDim2.new(0, 84, 0, 25)
AntiAnvil.Font = Enum.Font.SourceSans
AntiAnvil.Text = "AntiAnvil"
AntiAnvil.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiAnvil.TextScaled = true
AntiAnvil.TextSize = 14.000
AntiAnvil.TextWrapped = true

fccolor2.Name = "fccolor2"
fccolor2.Parent = AntiAnvil
fccolor2.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor2.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor2.BorderSizePixel = 0
fccolor2.Position = UDim2.new(0, 0, 1, 0)
fccolor2.Size = UDim2.new(0, 84, 0, 2)

FakeAccs.Name = "FakeAccs"
FakeAccs.Parent = Main
FakeAccs.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
FakeAccs.BorderColor3 = Color3.fromRGB(0, 0, 0)
FakeAccs.BorderSizePixel = 0
FakeAccs.Position = UDim2.new(0.760999978, 0, 0.0460000001, 0)
FakeAccs.Size = UDim2.new(0, 84, 0, 25)
FakeAccs.Font = Enum.Font.SourceSans
FakeAccs.Text = "FakeAccs"
FakeAccs.TextColor3 = Color3.fromRGB(255, 255, 255)
FakeAccs.TextScaled = true
FakeAccs.TextSize = 14.000
FakeAccs.TextWrapped = true

fccolor3.Name = "fccolor3"
fccolor3.Parent = FakeAccs
fccolor3.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor3.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor3.BorderSizePixel = 0
fccolor3.Position = UDim2.new(0, 0, 1, 0)
fccolor3.Size = UDim2.new(0, 84, 0, 2)

AntiSpinner.Name = "AntiSpinner"
AntiSpinner.Parent = Main
AntiSpinner.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiSpinner.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiSpinner.BorderSizePixel = 0
AntiSpinner.Position = UDim2.new(0.018421052, 0, 0.200000003, 0)
AntiSpinner.Size = UDim2.new(0, 84, 0, 25)
AntiSpinner.Font = Enum.Font.SourceSans
AntiSpinner.Text = "AntiSpinner"
AntiSpinner.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiSpinner.TextScaled = true
AntiSpinner.TextSize = 14.000
AntiSpinner.TextWrapped = true

fccolor4.Name = "fccolor4"
fccolor4.Parent = AntiSpinner
fccolor4.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor4.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor4.BorderSizePixel = 0
fccolor4.Position = UDim2.new(0, 0, 1, 0)
fccolor4.Size = UDim2.new(0, 84, 0, 2)

fling.Name = "fling"
fling.Parent = Main
fling.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
fling.BackgroundTransparency = 0.600
fling.BorderColor3 = Color3.fromRGB(0, 0, 0)
fling.BorderSizePixel = 0
fling.Position = UDim2.new(0.263157904, 0, 0.200000003, 0)
fling.Size = UDim2.new(0, 84, 0, 25)
fling.Font = Enum.Font.SourceSans
fling.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
fling.PlaceholderText = "FIing"
fling.Text = ""
fling.TextColor3 = Color3.fromRGB(131, 131, 131)
fling.TextScaled = true
fling.TextSize = 14.000
fling.TextWrapped = true

AntiRagdoll.Name = "AntiRagdoll"
AntiRagdoll.Parent = Main
AntiRagdoll.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiRagdoll.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiRagdoll.BorderSizePixel = 0
AntiRagdoll.Position = UDim2.new(0.513157904, 0, 0.200000003, 0)
AntiRagdoll.Size = UDim2.new(0, 84, 0, 25)
AntiRagdoll.Font = Enum.Font.SourceSans
AntiRagdoll.Text = "AntiRagdoll"
AntiRagdoll.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiRagdoll.TextScaled = true
AntiRagdoll.TextSize = 14.000
AntiRagdoll.TextWrapped = true

fccolor5.Name = "fccolor5"
fccolor5.Parent = AntiRagdoll
fccolor5.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor5.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor5.BorderSizePixel = 0
fccolor5.Position = UDim2.new(0, 0, 1, 0)
fccolor5.Size = UDim2.new(0, 84, 0, 2)

HackMovement.Name = "HackMovement"
HackMovement.Parent = Main
HackMovement.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
HackMovement.BorderColor3 = Color3.fromRGB(0, 0, 0)
HackMovement.BorderSizePixel = 0
HackMovement.Position = UDim2.new(0.760526299, 0, 0.200000003, 0)
HackMovement.Size = UDim2.new(0, 84, 0, 25)
HackMovement.Font = Enum.Font.SourceSans
HackMovement.Text = "HackMovement"
HackMovement.TextColor3 = Color3.fromRGB(255, 255, 255)
HackMovement.TextScaled = true
HackMovement.TextSize = 14.000
HackMovement.TextWrapped = true

fccolor6.Name = "fccolor6"
fccolor6.Parent = HackMovement
fccolor6.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor6.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor6.BorderSizePixel = 0
fccolor6.Position = UDim2.new(0, 0, 1, 0)
fccolor6.Size = UDim2.new(0, 84, 0, 2)

loopfling.Name = "loopfling"
loopfling.Parent = Main
loopfling.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
loopfling.BackgroundTransparency = 0.600
loopfling.BorderColor3 = Color3.fromRGB(0, 0, 0)
loopfling.BorderSizePixel = 0
loopfling.Position = UDim2.new(0.0210526325, 0, 0.366666675, 0)
loopfling.Size = UDim2.new(0, 84, 0, 25)
loopfling.Font = Enum.Font.SourceSans
loopfling.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
loopfling.PlaceholderText = "LoopFIing"
loopfling.Text = ""
loopfling.TextColor3 = Color3.fromRGB(131, 131, 131)
loopfling.TextScaled = true
loopfling.TextSize = 14.000
loopfling.TextWrapped = true

flingv2.Name = "flingv2"
flingv2.Parent = Main
flingv2.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
flingv2.BackgroundTransparency = 0.600
flingv2.BorderColor3 = Color3.fromRGB(0, 0, 0)
flingv2.BorderSizePixel = 0
flingv2.Position = UDim2.new(0.265789479, 0, 0.366666675, 0)
flingv2.Size = UDim2.new(0, 84, 0, 25)
flingv2.Font = Enum.Font.SourceSans
flingv2.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
flingv2.PlaceholderText = "FIing v2"
flingv2.Text = ""
flingv2.TextColor3 = Color3.fromRGB(131, 131, 131)
flingv2.TextScaled = true
flingv2.TextSize = 14.000
flingv2.TextWrapped = true

loopflingv2.Name = "loopflingv2"
loopflingv2.Parent = Main
loopflingv2.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
loopflingv2.BackgroundTransparency = 0.600
loopflingv2.BorderColor3 = Color3.fromRGB(0, 0, 0)
loopflingv2.BorderSizePixel = 0
loopflingv2.Position = UDim2.new(0.513157904, 0, 0.366666675, 0)
loopflingv2.Size = UDim2.new(0, 84, 0, 25)
loopflingv2.Font = Enum.Font.SourceSans
loopflingv2.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
loopflingv2.PlaceholderText = "LoopFIing v2"
loopflingv2.Text = ""
loopflingv2.TextColor3 = Color3.fromRGB(131, 131, 131)
loopflingv2.TextScaled = true
loopflingv2.TextSize = 14.000
loopflingv2.TextWrapped = true

ClearLoop.Name = "ClearLoop"
ClearLoop.Parent = Main
ClearLoop.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
ClearLoop.BorderColor3 = Color3.fromRGB(0, 0, 0)
ClearLoop.BorderSizePixel = 0
ClearLoop.Position = UDim2.new(0.763157904, 0, 0.366666675, 0)
ClearLoop.Size = UDim2.new(0, 84, 0, 25)
ClearLoop.Font = Enum.Font.SourceSans
ClearLoop.Text = "Clear Loop"
ClearLoop.TextColor3 = Color3.fromRGB(255, 255, 255)
ClearLoop.TextScaled = true
ClearLoop.TextSize = 14.000
ClearLoop.TextWrapped = true

AntiVoid.Name = "AntiVoid"
AntiVoid.Parent = Main
AntiVoid.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiVoid.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiVoid.BorderSizePixel = 0
AntiVoid.Position = UDim2.new(0.0210526325, 0, 0.529166639, 0)
AntiVoid.Size = UDim2.new(0, 84, 0, 25)
AntiVoid.Font = Enum.Font.SourceSans
AntiVoid.Text = "AntiVoid"
AntiVoid.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiVoid.TextScaled = true
AntiVoid.TextSize = 14.000
AntiVoid.TextWrapped = true

fccolor7.Name = "fccolor7"
fccolor7.Parent = AntiVoid
fccolor7.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor7.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor7.BorderSizePixel = 0
fccolor7.Position = UDim2.new(0, 0, 1, 0)
fccolor7.Size = UDim2.new(0, 84, 0, 2)

FlingAura.Name = "FlingAura"
FlingAura.Parent = Main
FlingAura.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
FlingAura.BorderColor3 = Color3.fromRGB(0, 0, 0)
FlingAura.BorderSizePixel = 0
FlingAura.Position = UDim2.new(0.265789479, 0, 0.529166639, 0)
FlingAura.Size = UDim2.new(0, 84, 0, 25)
FlingAura.Font = Enum.Font.SourceSans
FlingAura.Text = "FlingAura"
FlingAura.TextColor3 = Color3.fromRGB(255, 255, 255)
FlingAura.TextScaled = true
FlingAura.TextSize = 14.000
FlingAura.TextWrapped = true

fccolor8.Name = "fccolor8"
fccolor8.Parent = FlingAura
fccolor8.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor8.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor8.BorderSizePixel = 0
fccolor8.Position = UDim2.new(0, 0, 1, 0)
fccolor8.Size = UDim2.new(0, 84, 0, 2)

AutoRespawn.Name = "AutoRespawn"
AutoRespawn.Parent = Main
AutoRespawn.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AutoRespawn.BorderColor3 = Color3.fromRGB(0, 0, 0)
AutoRespawn.BorderSizePixel = 0
AutoRespawn.Position = UDim2.new(0.513157904, 0, 0.529166639, 0)
AutoRespawn.Size = UDim2.new(0, 84, 0, 25)
AutoRespawn.Font = Enum.Font.SourceSans
AutoRespawn.Text = "AutoRespawn"
AutoRespawn.TextColor3 = Color3.fromRGB(255, 255, 255)
AutoRespawn.TextScaled = true
AutoRespawn.TextSize = 14.000
AutoRespawn.TextWrapped = true

fccolor9.Name = "fccolor9"
fccolor9.Parent = AutoRespawn
fccolor9.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor9.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor9.BorderSizePixel = 0
fccolor9.Position = UDim2.new(0, 0, 1, 0)
fccolor9.Size = UDim2.new(0, 84, 0, 2)

Hiddenv2.Name = "Hiddenv2"
Hiddenv2.Parent = Main
Hiddenv2.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Hiddenv2.BorderColor3 = Color3.fromRGB(0, 0, 0)
Hiddenv2.BorderSizePixel = 0
Hiddenv2.Position = UDim2.new(0.763157904, 0, 0.529166639, 0)
Hiddenv2.Size = UDim2.new(0, 84, 0, 25)
Hiddenv2.Font = Enum.Font.SourceSans
Hiddenv2.Text = "Hiddenv2"
Hiddenv2.TextColor3 = Color3.fromRGB(255, 255, 255)
Hiddenv2.TextScaled = true
Hiddenv2.TextSize = 14.000
Hiddenv2.TextWrapped = true

fccolor10.Name = "fccolor10"
fccolor10.Parent = Hiddenv2
fccolor10.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor10.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor10.BorderSizePixel = 0
fccolor10.Position = UDim2.new(0, 0, 1, 0)
fccolor10.Size = UDim2.new(0, 84, 0, 2)

AntiVelocity.Name = "AntiVelocity"
AntiVelocity.Parent = Main
AntiVelocity.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiVelocity.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiVelocity.BorderSizePixel = 0
AntiVelocity.Position = UDim2.new(0.263000011, 0, 0.0460000001, 0)
AntiVelocity.Size = UDim2.new(0, 84, 0, 25)
AntiVelocity.Font = Enum.Font.SourceSans
AntiVelocity.Text = "AntiVelocity"
AntiVelocity.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiVelocity.TextScaled = true
AntiVelocity.TextSize = 14.000
AntiVelocity.TextWrapped = true

fccolor1.Name = "fccolor1"
fccolor1.Parent = AntiVelocity
fccolor1.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor1.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor1.BorderSizePixel = 0
fccolor1.Position = UDim2.new(0, 0, 1, 0)
fccolor1.Size = UDim2.new(0, 84, 0, 2)

Tools.Name = "Tools"
Tools.Parent = Tabs
Tools.BackgroundColor3 = Color3.fromRGB(16, 16, 16)
Tools.BackgroundTransparency = 0.200
Tools.BorderColor3 = Color3.fromRGB(0, 0, 0)
Tools.BorderSizePixel = 0
Tools.Size = UDim2.new(0, 380, 0, 240)
Tools.Visible = false

AnvilOrbit.Name = "AnvilOrbit"
AnvilOrbit.Parent = Tools
AnvilOrbit.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AnvilOrbit.BorderColor3 = Color3.fromRGB(0, 0, 0)
AnvilOrbit.BorderSizePixel = 0
AnvilOrbit.Position = UDim2.new(0.263000011, 0, 0.0460000001, 0)
AnvilOrbit.Size = UDim2.new(0, 84, 0, 25)
AnvilOrbit.Font = Enum.Font.SourceSans
AnvilOrbit.Text = "AnvilOrbit"
AnvilOrbit.TextColor3 = Color3.fromRGB(255, 255, 255)
AnvilOrbit.TextScaled = true
AnvilOrbit.TextSize = 14.000
AnvilOrbit.TextWrapped = true

fccolor11.Name = "fccolor11"
fccolor11.Parent = AnvilOrbit
fccolor11.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor11.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor11.BorderSizePixel = 0
fccolor11.Position = UDim2.new(0, 0, 1, 0)
fccolor11.Size = UDim2.new(0, 84, 0, 2)

anvilkill.Name = "anvilkill"
anvilkill.Parent = Tools
anvilkill.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
anvilkill.BackgroundTransparency = 0.600
anvilkill.BorderColor3 = Color3.fromRGB(0, 0, 0)
anvilkill.BorderSizePixel = 0
anvilkill.Position = UDim2.new(0.0209999997, 0, 0.0460000001, 0)
anvilkill.Size = UDim2.new(0, 84, 0, 25)
anvilkill.Font = Enum.Font.SourceSans
anvilkill.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
anvilkill.PlaceholderText = "anvilkill"
anvilkill.Text = ""
anvilkill.TextColor3 = Color3.fromRGB(131, 131, 131)
anvilkill.TextScaled = true
anvilkill.TextSize = 14.000
anvilkill.TextWrapped = true

AntiAnvilBreak.Name = "AntiAnvilBreak"
AntiAnvilBreak.Parent = Tools
AntiAnvilBreak.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AntiAnvilBreak.BorderColor3 = Color3.fromRGB(0, 0, 0)
AntiAnvilBreak.BorderSizePixel = 0
AntiAnvilBreak.Position = UDim2.new(0.760999978, 0, 0.0460000001, 0)
AntiAnvilBreak.Size = UDim2.new(0, 84, 0, 25)
AntiAnvilBreak.Font = Enum.Font.SourceSans
AntiAnvilBreak.Text = "AntiAnvilBreak"
AntiAnvilBreak.TextColor3 = Color3.fromRGB(255, 255, 255)
AntiAnvilBreak.TextScaled = true
AntiAnvilBreak.TextSize = 14.000
AntiAnvilBreak.TextWrapped = true

fccolor12.Name = "fccolor12"
fccolor12.Parent = AntiAnvilBreak
fccolor12.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor12.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor12.BorderSizePixel = 0
fccolor12.Position = UDim2.new(0, 0, 1, 0)
fccolor12.Size = UDim2.new(0, 84, 0, 2)

AutoThrow.Name = "AutoThrow"
AutoThrow.Parent = Tools
AutoThrow.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AutoThrow.BorderColor3 = Color3.fromRGB(0, 0, 0)
AutoThrow.BorderSizePixel = 0
AutoThrow.Position = UDim2.new(0.513000011, 0, 0.0460000001, 0)
AutoThrow.Size = UDim2.new(0, 84, 0, 25)
AutoThrow.Font = Enum.Font.SourceSans
AutoThrow.Text = "AutoThrowAnvil"
AutoThrow.TextColor3 = Color3.fromRGB(255, 255, 255)
AutoThrow.TextScaled = true
AutoThrow.TextSize = 14.000
AutoThrow.TextWrapped = true

fccolor14.Name = "fccolor14"
fccolor14.Parent = AutoThrow
fccolor14.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor14.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor14.BorderSizePixel = 0
fccolor14.Position = UDim2.new(0, 0, 1, 0)
fccolor14.Size = UDim2.new(0, 84, 0, 2)

orbitheight.Name = "orbitheight"
orbitheight.Parent = Tools
orbitheight.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
orbitheight.BackgroundTransparency = 0.600
orbitheight.BorderColor3 = Color3.fromRGB(0, 0, 0)
orbitheight.BorderSizePixel = 0
orbitheight.Position = UDim2.new(0.0179999992, 0, 0.200000003, 0)
orbitheight.Size = UDim2.new(0, 84, 0, 25)
orbitheight.Font = Enum.Font.SourceSans
orbitheight.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
orbitheight.PlaceholderText = "orbitheight"
orbitheight.Text = ""
orbitheight.TextColor3 = Color3.fromRGB(131, 131, 131)
orbitheight.TextScaled = true
orbitheight.TextSize = 14.000
orbitheight.TextWrapped = true

orbitradius.Name = "orbitradius"
orbitradius.Parent = Tools
orbitradius.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
orbitradius.BackgroundTransparency = 0.600
orbitradius.BorderColor3 = Color3.fromRGB(0, 0, 0)
orbitradius.BorderSizePixel = 0
orbitradius.Position = UDim2.new(0.263000011, 0, 0.200000003, 0)
orbitradius.Size = UDim2.new(0, 84, 0, 25)
orbitradius.Font = Enum.Font.SourceSans
orbitradius.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
orbitradius.PlaceholderText = "orbitradius"
orbitradius.Text = ""
orbitradius.TextColor3 = Color3.fromRGB(131, 131, 131)
orbitradius.TextScaled = true
orbitradius.TextSize = 14.000
orbitradius.TextWrapped = true

orbitspeed.Name = "orbitspeed"
orbitspeed.Parent = Tools
orbitspeed.BackgroundColor3 = Color3.fromRGB(56, 56, 56)
orbitspeed.BackgroundTransparency = 0.600
orbitspeed.BorderColor3 = Color3.fromRGB(0, 0, 0)
orbitspeed.BorderSizePixel = 0
orbitspeed.Position = UDim2.new(0.513000011, 0, 0.200000003, 0)
orbitspeed.Size = UDim2.new(0, 84, 0, 25)
orbitspeed.Font = Enum.Font.SourceSans
orbitspeed.PlaceholderColor3 = Color3.fromRGB(79, 79, 79)
orbitspeed.PlaceholderText = "orbitspeed"
orbitspeed.Text = ""
orbitspeed.TextColor3 = Color3.fromRGB(131, 131, 131)
orbitspeed.TextScaled = true
orbitspeed.TextSize = 14.000
orbitspeed.TextWrapped = true

LowPP.Name = "LowPP"
LowPP.Parent = Tools
LowPP.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
LowPP.BorderColor3 = Color3.fromRGB(0, 0, 0)
LowPP.BorderSizePixel = 0
LowPP.Position = UDim2.new(0.760368407, 0, 0.19600004, 0)
LowPP.Size = UDim2.new(0, 84, 0, 25)
LowPP.Font = Enum.Font.SourceSans
LowPP.Text = "LowPP"
LowPP.TextColor3 = Color3.fromRGB(255, 255, 255)
LowPP.TextScaled = true
LowPP.TextSize = 14.000
LowPP.TextWrapped = true

fccolor15.Name = "fccolor15"
fccolor15.Parent = LowPP
fccolor15.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor15.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor15.BorderSizePixel = 0
fccolor15.Position = UDim2.new(0, 0, 1, 0)
fccolor15.Size = UDim2.new(0, 84, 0, 2)

AnvilDrone.Name = "AnvilDrone"
AnvilDrone.Parent = Tools
AnvilDrone.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
AnvilDrone.BorderColor3 = Color3.fromRGB(0, 0, 0)
AnvilDrone.BorderSizePixel = 0
AnvilDrone.Position = UDim2.new(0.0209999997, 0, 0.367000014, 0)
AnvilDrone.Size = UDim2.new(0, 84, 0, 25)
AnvilDrone.Font = Enum.Font.SourceSans
AnvilDrone.Text = "AnvilDrone"
AnvilDrone.TextColor3 = Color3.fromRGB(255, 255, 255)
AnvilDrone.TextScaled = true
AnvilDrone.TextSize = 14.000
AnvilDrone.TextWrapped = true

fccolor13.Name = "fccolor13"
fccolor13.Parent = AnvilDrone
fccolor13.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor13.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor13.BorderSizePixel = 0
fccolor13.Position = UDim2.new(0, 0, 1, 0)
fccolor13.Size = UDim2.new(0, 84, 0, 2)

Global.Name = "Global"
Global.Parent = Tabs
Global.BackgroundColor3 = Color3.fromRGB(16, 16, 16)
Global.BackgroundTransparency = 0.200
Global.BorderColor3 = Color3.fromRGB(0, 0, 0)
Global.BorderSizePixel = 0
Global.Size = UDim2.new(0, 380, 0, 240)
Global.Visible = false

LagServer.Name = "LagServer"
LagServer.Parent = Global
LagServer.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
LagServer.BorderColor3 = Color3.fromRGB(0, 0, 0)
LagServer.BorderSizePixel = 0
LagServer.Position = UDim2.new(0.0210526325, 0, 0.0458333343, 0)
LagServer.Size = UDim2.new(0, 84, 0, 25)
LagServer.Font = Enum.Font.SourceSans
LagServer.Text = "LagServer"
LagServer.TextColor3 = Color3.fromRGB(255, 255, 255)
LagServer.TextScaled = true
LagServer.TextSize = 14.000
LagServer.TextWrapped = true

fccolor16.Name = "fccolor16"
fccolor16.Parent = LagServer
fccolor16.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
fccolor16.BorderColor3 = Color3.fromRGB(0, 0, 0)
fccolor16.BorderSizePixel = 0
fccolor16.Position = UDim2.new(0, 0, 1, 0)
fccolor16.Size = UDim2.new(0, 84, 0, 2)

Misc.Name = "Misc"
Misc.Parent = Tabs
Misc.BackgroundColor3 = Color3.fromRGB(16, 16, 16)
Misc.BackgroundTransparency = 0.200
Misc.BorderColor3 = Color3.fromRGB(0, 0, 0)
Misc.BorderSizePixel = 0
Misc.Size = UDim2.new(0, 380, 0, 240)
Misc.Visible = false

Keybinds.Name = "Keybinds"
Keybinds.Parent = Tabs
Keybinds.BackgroundColor3 = Color3.fromRGB(16, 16, 16)
Keybinds.BackgroundTransparency = 0.200
Keybinds.BorderColor3 = Color3.fromRGB(0, 0, 0)
Keybinds.BorderSizePixel = 0
Keybinds.Size = UDim2.new(0, 380, 0, 240)
Keybinds.Visible = false

GlobalB.Name = "GlobalB"
GlobalB.Parent = Tabs
GlobalB.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
GlobalB.BorderColor3 = Color3.fromRGB(0, 0, 0)
GlobalB.BorderSizePixel = 0
GlobalB.Position = UDim2.new(0.400000006, 0, 0.88163656, 0)
GlobalB.Size = UDim2.new(0, 76, 0, 28)
GlobalB.Font = Enum.Font.SourceSans
GlobalB.Text = "Global"
GlobalB.TextColor3 = Color3.fromRGB(255, 255, 255)
GlobalB.TextScaled = true
GlobalB.TextSize = 14.000
GlobalB.TextWrapped = true

KeybindsB.Name = "KeybindsB"
KeybindsB.Parent = Tabs
KeybindsB.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
KeybindsB.BorderColor3 = Color3.fromRGB(0, 0, 0)
KeybindsB.BorderSizePixel = 0
KeybindsB.Position = UDim2.new(0.800000012, 0, 0.88163656, 0)
KeybindsB.Size = UDim2.new(0, 76, 0, 28)
KeybindsB.Font = Enum.Font.SourceSans
KeybindsB.Text = "Keybinds"
KeybindsB.TextColor3 = Color3.fromRGB(255, 255, 255)
KeybindsB.TextScaled = true
KeybindsB.TextSize = 14.000
KeybindsB.TextWrapped = true

MainB.Name = "MainB"
MainB.Parent = Tabs
MainB.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
MainB.BorderColor3 = Color3.fromRGB(0, 0, 0)
MainB.BorderSizePixel = 0
MainB.Position = UDim2.new(0, 0, 0.88163656, 0)
MainB.Size = UDim2.new(0, 76, 0, 28)
MainB.Font = Enum.Font.SourceSans
MainB.Text = "Main"
MainB.TextColor3 = Color3.fromRGB(255, 255, 255)
MainB.TextScaled = true
MainB.TextSize = 14.000
MainB.TextWrapped = true

MiscB.Name = "MiscB"
MiscB.Parent = Tabs
MiscB.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
MiscB.BorderColor3 = Color3.fromRGB(0, 0, 0)
MiscB.BorderSizePixel = 0
MiscB.Position = UDim2.new(0.600000024, 0, 0.88163656, 0)
MiscB.Size = UDim2.new(0, 76, 0, 28)
MiscB.Font = Enum.Font.SourceSans
MiscB.Text = "Misc"
MiscB.TextColor3 = Color3.fromRGB(255, 255, 255)
MiscB.TextScaled = true
MiscB.TextSize = 14.000
MiscB.TextWrapped = true

ToolsB.Name = "ToolsB"
ToolsB.Parent = Tabs
ToolsB.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
ToolsB.BorderColor3 = Color3.fromRGB(0, 0, 0)
ToolsB.BorderSizePixel = 0
ToolsB.Position = UDim2.new(0.200000003, 0, 0.88163656, 0)
ToolsB.Size = UDim2.new(0, 76, 0, 28)
ToolsB.Font = Enum.Font.SourceSans
ToolsB.Text = "Tools"
ToolsB.TextColor3 = Color3.fromRGB(255, 255, 255)
ToolsB.TextScaled = true
ToolsB.TextSize = 14.000
ToolsB.TextWrapped = true

Profile.Name = "Profile"
Profile.Parent = GUI
Profile.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Profile.BorderColor3 = Color3.fromRGB(0, 0, 0)
Profile.BorderSizePixel = 0
Profile.Position = UDim2.new(0.403158754, 0, 0.366828918, 0)
Profile.Size = UDim2.new(0, 186, 0, 203)
Profile.Visible = false

ProfileImage.Name = "ProfileImage"
ProfileImage.Parent = Profile
ProfileImage.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
ProfileImage.BorderColor3 = Color3.fromRGB(0, 0, 0)
ProfileImage.BorderSizePixel = 0
ProfileImage.Position = UDim2.new(0.0483870953, 0, 0.0295566507, 0)
ProfileImage.Size = UDim2.new(0, 58, 0, 54)
ProfileImage.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

Playername.Name = "Playername"
Playername.Parent = ProfileImage
Playername.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Playername.BackgroundTransparency = 1.000
Playername.BorderColor3 = Color3.fromRGB(0, 0, 0)
Playername.BorderSizePixel = 0
Playername.Position = UDim2.new(1.2241379, 0, 0, 0)
Playername.Size = UDim2.new(0, 99, 0, 18)
Playername.Font = Enum.Font.SourceSans
Playername.Text = "playername"
Playername.TextColor3 = Color3.fromRGB(255, 255, 255)
Playername.TextSize = 14.000
Playername.TextXAlignment = Enum.TextXAlignment.Left

Displayname.Name = "Displayname"
Displayname.Parent = ProfileImage
Displayname.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Displayname.BackgroundTransparency = 1.000
Displayname.BorderColor3 = Color3.fromRGB(0, 0, 0)
Displayname.BorderSizePixel = 0
Displayname.Position = UDim2.new(1.2241379, 0, 0.333333343, 0)
Displayname.Size = UDim2.new(0, 99, 0, 18)
Displayname.Font = Enum.Font.SourceSans
Displayname.Text = "displayname"
Displayname.TextColor3 = Color3.fromRGB(255, 255, 255)
Displayname.TextSize = 14.000
Displayname.TextXAlignment = Enum.TextXAlignment.Left

AnvilKill.Name = "AnvilKill"
AnvilKill.Parent = Profile
AnvilKill.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
AnvilKill.BorderColor3 = Color3.fromRGB(0, 0, 0)
AnvilKill.BorderSizePixel = 0
AnvilKill.Position = UDim2.new(0, 0, 0.325123161, 0)
AnvilKill.Size = UDim2.new(0, 186, 0, 20)
AnvilKill.Font = Enum.Font.SourceSans
AnvilKill.Text = "AnvilKill"
AnvilKill.TextColor3 = Color3.fromRGB(255, 255, 255)
AnvilKill.TextSize = 17.000

flingprofile.Name = "flingprofile"
flingprofile.Parent = Profile
flingprofile.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
flingprofile.BorderColor3 = Color3.fromRGB(0, 0, 0)
flingprofile.BorderSizePixel = 0
flingprofile.Position = UDim2.new(0, 0, 0.423645318, 0)
flingprofile.Size = UDim2.new(0, 186, 0, 20)
flingprofile.Font = Enum.Font.SourceSans
flingprofile.Text = "FIing"
flingprofile.TextColor3 = Color3.fromRGB(255, 255, 255)
flingprofile.TextSize = 17.000

flingv2profile.Name = "flingv2profile"
flingv2profile.Parent = Profile
flingv2profile.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
flingv2profile.BorderColor3 = Color3.fromRGB(0, 0, 0)
flingv2profile.BorderSizePixel = 0
flingv2profile.Position = UDim2.new(0, 0, 0.522167504, 0)
flingv2profile.Size = UDim2.new(0, 186, 0, 20)
flingv2profile.Font = Enum.Font.SourceSans
flingv2profile.Text = "FIing v2"
flingv2profile.TextColor3 = Color3.fromRGB(255, 255, 255)
flingv2profile.TextSize = 17.000

--[[toggles , buttons , textboxs]]
local toggleStates = {}

function settoggle(button, colorFrame)
	return function(callback)
		toggleStates[button] = false
		button.MouseButton1Click:Connect(function()
			toggleStates[button] = not toggleStates[button]
			if toggleStates[button] then
				colorFrame.BackgroundColor3 = Color3.fromRGB(0, 170, 0)
			else
				colorFrame.BackgroundColor3 = Color3.fromRGB(153, 0, 0)
			end
			if callback then callback(toggleStates[button]) end
		end)
	end
end

function setbutton(button)
	return function(callback)
		button.MouseButton1Click:Connect(function()
			if callback then callback() end
		end)
	end
end

function settextbox(textbox)
	return function(callback)
		textbox.FocusLost:Connect(function(enterPressed)
			if enterPressed and callback then
				callback()
			end
		end)
	end
end
