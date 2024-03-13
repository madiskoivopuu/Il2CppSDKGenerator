#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoEntity"));
	}

	template <typename T = CurrentServerComponent*> static T& currentServerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SelectedServerComponent*> static T& selectedServerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = AddressComponent*> T get_address() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CD18))(this);
	}
	template <typename T = bool> T get_hasAddress() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CDA0))(this);
	}
	template <typename T = void> T AddAddress(Il2CppString* newValue) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161CDAC))(this, newValue);
	}
	template <typename T = void> T ReplaceAddress(Il2CppString* newValue) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161CEC0))(this, newValue);
	}
	template <typename T = void> T RemoveAddress() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CFD4))(this);
	}
	template <typename T = ChatServerComponent*> T get_chatServer() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CFE0))(this);
	}
	template <typename T = bool> T get_hasChatServer() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D068))(this);
	}
	template <typename T = void> T AddChatServer(Il2CppString* newIp, Il2CppString* newFqdn) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161D074))(this, newIp, newFqdn);
	}
	template <typename T = void> T ReplaceChatServer(Il2CppString* newIp, Il2CppString* newFqdn) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161D19C))(this, newIp, newFqdn);
	}
	template <typename T = void> T RemoveChatServer() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2C4))(this);
	}
	template <typename T = bool> T get_isCurrentServer() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2D0))(this);
	}
	template <typename T = void> T set_isCurrentServer(bool value) {
		return ((T (*)(ServerInfoEntity*, bool))(Il2CppBase() + 0x161CC00))(this, value);
	}
	template <typename T = NameComponent*> T get_name() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2DC))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D364))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D370))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D484))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D598))(this);
	}
	template <typename T = PopulationComponent*> T get_population() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D5A4))(this);
	}
	template <typename T = bool> T get_hasPopulation() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D62C))(this);
	}
	template <typename T = void> T AddPopulation(float newValue) {
		return ((T (*)(ServerInfoEntity*, float))(Il2CppBase() + 0x161D638))(this, newValue);
	}
	template <typename T = void> T ReplacePopulation(float newValue) {
		return ((T (*)(ServerInfoEntity*, float))(Il2CppBase() + 0x161D73C))(this, newValue);
	}
	template <typename T = void> T RemovePopulation() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D840))(this);
	}
	template <typename T = RegionComponent*> T get_region() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D84C))(this);
	}
	template <typename T = bool> T get_hasRegion() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D8D4))(this);
	}
	template <typename T = void> T AddRegion(Il2CppString* newName) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D8E0))(this, newName);
	}
	template <typename T = void> T ReplaceRegion(Il2CppString* newName) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D9F4))(this, newName);
	}
	template <typename T = void> T RemoveRegion() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DB08))(this);
	}
	template <typename T = bool> T get_isSelectedServer() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DB14))(this);
	}
	template <typename T = void> T set_isSelectedServer(bool value) {
		return ((T (*)(ServerInfoEntity*, bool))(Il2CppBase() + 0x161DB20))(this, value);
	}
	template <typename T = ServerViewComponent*> T get_serverView() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DC38))(this);
	}
	template <typename T = bool> T get_hasServerView() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DCC0))(this);
	}
	template <typename T = void> T AddServerView(ServerView* newView) {
		return ((T (*)(ServerInfoEntity*, ServerView*))(Il2CppBase() + 0x161DCCC))(this, newView);
	}
	template <typename T = void> T ReplaceServerView(ServerView* newView) {
		return ((T (*)(ServerInfoEntity*, ServerView*))(Il2CppBase() + 0x161DDE0))(this, newView);
	}
	template <typename T = void> T RemoveServerView() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DEF4))(this);
	}
	template <typename T = StatusComponent*> T get_status() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DF00))(this);
	}
	template <typename T = bool> T get_hasStatus() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DF88))(this);
	}
	template <typename T = void> T AddStatus(ServerStatus* newValue) {
		return ((T (*)(ServerInfoEntity*, ServerStatus*))(Il2CppBase() + 0x161DF94))(this, newValue);
	}
	template <typename T = void> T ReplaceStatus(ServerStatus* newValue) {
		return ((T (*)(ServerInfoEntity*, ServerStatus*))(Il2CppBase() + 0x161E098))(this, newValue);
	}
	template <typename T = void> T RemoveStatus() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E19C))(this);
	}
	template <typename T = SubregionComponent*> T get_subregion() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E1A8))(this);
	}
	template <typename T = bool> T get_hasSubregion() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E230))(this);
	}
	template <typename T = void> T AddSubregion(Il2CppString* newName) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161E23C))(this, newName);
	}
	template <typename T = void> T ReplaceSubregion(Il2CppString* newName) {
		return ((T (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161E350))(this, newName);
	}
	template <typename T = void> T RemoveSubregion() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E464))(this);
	}
	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E470))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E4F8))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(ServerInfoEntity*, int64_t))(Il2CppBase() + 0x161E504))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(ServerInfoEntity*, int64_t))(Il2CppBase() + 0x161E608))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E70C))(this);
	}

};

