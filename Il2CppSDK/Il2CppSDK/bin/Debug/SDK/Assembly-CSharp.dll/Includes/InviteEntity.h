#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteEntity"));
	}


	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x124614C))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x12461D4))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(InviteEntity*, uint8_t))(Il2CppBase() + 0x12461E0))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(InviteEntity*, uint8_t))(Il2CppBase() + 0x12462E4))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x12463E8))(this);
	}
	template <typename R = FromPlayerComponent*> R get_fromPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x12463F4))(this);
	}
	template <typename R = bool> R get_hasFromPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x124647C))(this);
	}
	template <typename R = void> R AddFromPlayer(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246488))(this, newId);
	}
	template <typename R = void> R ReplaceFromPlayer(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x124658C))(this, newId);
	}
	template <typename R = void> R RemoveFromPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246690))(this);
	}
	template <typename R = InviteComponent*> R get_invite() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x124669C))(this);
	}
	template <typename R = bool> R get_hasInvite() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246724))(this);
	}
	template <typename R = void> R AddInvite(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1245E4C))(this, newId);
	}
	template <typename R = void> R ReplaceInvite(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246730))(this, newId);
	}
	template <typename R = void> R RemoveInvite() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246834))(this);
	}
	template <typename R = MessageComponent*> R get_message() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246840))(this);
	}
	template <typename R = bool> R get_hasMessage() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x12468C8))(this);
	}
	template <typename R = void> R AddMessage(Il2CppString* newValue) {
		return ((R (*)(InviteEntity*, Il2CppString*))(Il2CppBase() + 0x12468D4))(this, newValue);
	}
	template <typename R = void> R ReplaceMessage(Il2CppString* newValue) {
		return ((R (*)(InviteEntity*, Il2CppString*))(Il2CppBase() + 0x12469E8))(this, newValue);
	}
	template <typename R = void> R RemoveMessage() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246AFC))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246B08))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246B90))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246B9C))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246CA0))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246DA4))(this);
	}
	template <typename R = ToPlayerComponent*> R get_toPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246DB0))(this);
	}
	template <typename R = bool> R get_hasToPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x1246E38))(this);
	}
	template <typename R = void> R AddToPlayer(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246E44))(this, newId);
	}
	template <typename R = void> R ReplaceToPlayer(int64_t newId) {
		return ((R (*)(InviteEntity*, int64_t))(Il2CppBase() + 0x1246F48))(this, newId);
	}
	template <typename R = void> R RemoveToPlayer() {
		return ((R (*)(InviteEntity*))(Il2CppBase() + 0x124704C))(this);
	}

};

