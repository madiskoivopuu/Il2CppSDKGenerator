#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteEntity"));
	}


	template <typename T = uintptr_t> T get_cell() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x124614C))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x12461D4))(this);
	}
	template <typename T = void> T AddCell(unsigned char newId) {
		return ((T (*)(InviteEntity*, unsigned char))(Il2CppBase() + 0x12461E0))(this, newId);
	}
	template <typename T = void> T ReplaceCell(unsigned char newId) {
		return ((T (*)(InviteEntity*, unsigned char))(Il2CppBase() + 0x12462E4))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x12463E8))(this);
	}
	template <typename T = uintptr_t> T get_fromPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x12463F4))(this);
	}
	template <typename T = bool> T get_hasFromPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x124647C))(this);
	}
	template <typename T = void> T AddFromPlayer(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246488))(this, newId);
	}
	template <typename T = void> T ReplaceFromPlayer(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x124658C))(this, newId);
	}
	template <typename T = void> T RemoveFromPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246690))(this);
	}
	template <typename T = uintptr_t> T get_invite() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x124669C))(this);
	}
	template <typename T = bool> T get_hasInvite() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246724))(this);
	}
	template <typename T = void> T AddInvite(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1245E4C))(this, newId);
	}
	template <typename T = void> T ReplaceInvite(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246730))(this, newId);
	}
	template <typename T = void> T RemoveInvite() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246834))(this);
	}
	template <typename T = uintptr_t> T get_message() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246840))(this);
	}
	template <typename T = bool> T get_hasMessage() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x12468C8))(this);
	}
	template <typename T = void> T AddMessage(Il2CppString* newValue) {
		return ((T (*)(InviteEntity*, Il2CppString*))(Il2CppBase() + 0x12468D4))(this, newValue);
	}
	template <typename T = void> T ReplaceMessage(Il2CppString* newValue) {
		return ((T (*)(InviteEntity*, Il2CppString*))(Il2CppBase() + 0x12469E8))(this, newValue);
	}
	template <typename T = void> T RemoveMessage() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246AFC))(this);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246B08))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246B90))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246B9C))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246CA0))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246DA4))(this);
	}
	template <typename T = uintptr_t> T get_toPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246DB0))(this);
	}
	template <typename T = bool> T get_hasToPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x1246E38))(this);
	}
	template <typename T = void> T AddToPlayer(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246E44))(this, newId);
	}
	template <typename T = void> T ReplaceToPlayer(int64_t newId) {
		return ((T (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246F48))(this, newId);
	}
	template <typename T = void> T RemoveToPlayer() {
		return ((T (*)(InviteEntity*))(Il2CppBase() + 0x124704C))(this);
	}

};

}
