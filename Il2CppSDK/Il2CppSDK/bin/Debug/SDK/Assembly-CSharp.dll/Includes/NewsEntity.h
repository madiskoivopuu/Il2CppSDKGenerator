#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsEntity"));
	}

	template <typename T = ReadComponent*> static T& readComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ShowToNewPlayersComponent*> static T& showToNewPlayersComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = AvailablePlatformComponent*> T get_availablePlatform() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AE7D4))(this);
	}
	template <typename T = bool> T get_hasAvailablePlatform() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AE85C))(this);
	}
	template <typename T = void> T AddAvailablePlatform(AvailablePlatform* newType) {
		return ((T (*)(NewsEntity*, AvailablePlatform*))(Il2CppBase() + 0x13AE868))(this, newType);
	}
	template <typename T = void> T ReplaceAvailablePlatform(AvailablePlatform* newType) {
		return ((T (*)(NewsEntity*, AvailablePlatform*))(Il2CppBase() + 0x13AE96C))(this, newType);
	}
	template <typename T = void> T RemoveAvailablePlatform() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEA70))(this);
	}
	template <typename T = IdComponent*> T get_id() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEA7C))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEB04))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(NewsEntity*, int32_t))(Il2CppBase() + 0x13AE4C8))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(NewsEntity*, int32_t))(Il2CppBase() + 0x13AEB10))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEC14))(this);
	}
	template <typename T = InvalidationDateComponent*> T get_invalidationDate() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEC20))(this);
	}
	template <typename T = bool> T get_hasInvalidationDate() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AECA8))(this);
	}
	template <typename T = void> T AddInvalidationDate(int64_t newValue) {
		return ((T (*)(NewsEntity*, int64_t))(Il2CppBase() + 0x13AECB4))(this, newValue);
	}
	template <typename T = void> T ReplaceInvalidationDate(int64_t newValue) {
		return ((T (*)(NewsEntity*, int64_t))(Il2CppBase() + 0x13AEDB8))(this, newValue);
	}
	template <typename T = void> T RemoveInvalidationDate() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEEBC))(this);
	}
	template <typename T = bool> T get_wasRead() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEEC8))(this);
	}
	template <typename T = void> T set_wasRead(bool value) {
		return ((T (*)(NewsEntity*, bool))(Il2CppBase() + 0x13AEED4))(this, value);
	}
	template <typename T = bool> T get_needShowToNewPlayers() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AEFEC))(this);
	}
	template <typename T = void> T set_needShowToNewPlayers(bool value) {
		return ((T (*)(NewsEntity*, bool))(Il2CppBase() + 0x13AEFF8))(this, value);
	}
	template <typename T = TextComponent*> T get_text() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF110))(this);
	}
	template <typename T = bool> T get_hasText() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF198))(this);
	}
	template <typename T = void> T AddText(Il2CppString* newValue) {
		return ((T (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF1A4))(this, newValue);
	}
	template <typename T = void> T ReplaceText(Il2CppString* newValue) {
		return ((T (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF2B8))(this, newValue);
	}
	template <typename T = void> T RemoveText() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF3CC))(this);
	}
	template <typename T = TitleComponent*> T get_title() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF3D8))(this);
	}
	template <typename T = bool> T get_hasTitle() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF460))(this);
	}
	template <typename T = void> T AddTitle(Il2CppString* newValue) {
		return ((T (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF46C))(this, newValue);
	}
	template <typename T = void> T ReplaceTitle(Il2CppString* newValue) {
		return ((T (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF580))(this, newValue);
	}
	template <typename T = void> T RemoveTitle() {
		return ((T (*)(NewsEntity*))(Il2CppBase() + 0x13AF694))(this);
	}

};

