#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoEntity"));
	}

	template <typename R = CurrentServerComponent*> static R& currentServerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = SelectedServerComponent*> static R& selectedServerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = AddressComponent*> R get_address() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CD18))(this);
	}
	template <typename R = bool> R get_hasAddress() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CDA0))(this);
	}
	template <typename R = void> R AddAddress(Il2CppString* newValue) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161CDAC))(this, newValue);
	}
	template <typename R = void> R ReplaceAddress(Il2CppString* newValue) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161CEC0))(this, newValue);
	}
	template <typename R = void> R RemoveAddress() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CFD4))(this);
	}
	template <typename R = ChatServerComponent*> R get_chatServer() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161CFE0))(this);
	}
	template <typename R = bool> R get_hasChatServer() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D068))(this);
	}
	template <typename R = void> R AddChatServer(Il2CppString* newIp, Il2CppString* newFqdn) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161D074))(this, newIp, newFqdn);
	}
	template <typename R = void> R ReplaceChatServer(Il2CppString* newIp, Il2CppString* newFqdn) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161D19C))(this, newIp, newFqdn);
	}
	template <typename R = void> R RemoveChatServer() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2C4))(this);
	}
	template <typename R = bool> R get_isCurrentServer() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2D0))(this);
	}
	template <typename R = void> R set_isCurrentServer(bool value) {
		return ((R (*)(ServerInfoEntity*, bool))(Il2CppBase() + 0x161CC00))(this, value);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D2DC))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D364))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D370))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D484))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D598))(this);
	}
	template <typename R = PopulationComponent*> R get_population() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D5A4))(this);
	}
	template <typename R = bool> R get_hasPopulation() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D62C))(this);
	}
	template <typename R = void> R AddPopulation(float newValue) {
		return ((R (*)(ServerInfoEntity*, float))(Il2CppBase() + 0x161D638))(this, newValue);
	}
	template <typename R = void> R ReplacePopulation(float newValue) {
		return ((R (*)(ServerInfoEntity*, float))(Il2CppBase() + 0x161D73C))(this, newValue);
	}
	template <typename R = void> R RemovePopulation() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D840))(this);
	}
	template <typename R = RegionComponent*> R get_region() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D84C))(this);
	}
	template <typename R = bool> R get_hasRegion() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161D8D4))(this);
	}
	template <typename R = void> R AddRegion(Il2CppString* newName) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D8E0))(this, newName);
	}
	template <typename R = void> R ReplaceRegion(Il2CppString* newName) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161D9F4))(this, newName);
	}
	template <typename R = void> R RemoveRegion() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DB08))(this);
	}
	template <typename R = bool> R get_isSelectedServer() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DB14))(this);
	}
	template <typename R = void> R set_isSelectedServer(bool value) {
		return ((R (*)(ServerInfoEntity*, bool))(Il2CppBase() + 0x161DB20))(this, value);
	}
	template <typename R = ServerViewComponent*> R get_serverView() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DC38))(this);
	}
	template <typename R = bool> R get_hasServerView() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DCC0))(this);
	}
	template <typename R = void> R AddServerView(ServerView* newView) {
		return ((R (*)(ServerInfoEntity*, ServerView*))(Il2CppBase() + 0x161DCCC))(this, newView);
	}
	template <typename R = void> R ReplaceServerView(ServerView* newView) {
		return ((R (*)(ServerInfoEntity*, ServerView*))(Il2CppBase() + 0x161DDE0))(this, newView);
	}
	template <typename R = void> R RemoveServerView() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DEF4))(this);
	}
	template <typename R = StatusComponent*> R get_status() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DF00))(this);
	}
	template <typename R = bool> R get_hasStatus() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161DF88))(this);
	}
	template <typename R = void> R AddStatus(ServerStatus* newValue) {
		return ((R (*)(ServerInfoEntity*, ServerStatus*))(Il2CppBase() + 0x161DF94))(this, newValue);
	}
	template <typename R = void> R ReplaceStatus(ServerStatus* newValue) {
		return ((R (*)(ServerInfoEntity*, ServerStatus*))(Il2CppBase() + 0x161E098))(this, newValue);
	}
	template <typename R = void> R RemoveStatus() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E19C))(this);
	}
	template <typename R = SubregionComponent*> R get_subregion() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E1A8))(this);
	}
	template <typename R = bool> R get_hasSubregion() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E230))(this);
	}
	template <typename R = void> R AddSubregion(Il2CppString* newName) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161E23C))(this, newName);
	}
	template <typename R = void> R ReplaceSubregion(Il2CppString* newName) {
		return ((R (*)(ServerInfoEntity*, Il2CppString*))(Il2CppBase() + 0x161E350))(this, newName);
	}
	template <typename R = void> R RemoveSubregion() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E464))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E470))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E4F8))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(ServerInfoEntity*, int64_t))(Il2CppBase() + 0x161E504))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(ServerInfoEntity*, int64_t))(Il2CppBase() + 0x161E608))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(ServerInfoEntity*))(Il2CppBase() + 0x161E70C))(this);
	}

};

