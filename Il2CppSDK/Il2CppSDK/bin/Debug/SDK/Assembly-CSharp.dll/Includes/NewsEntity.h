#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsEntity"));
	}

	template <typename R = ReadComponent*> static R& readComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ShowToNewPlayersComponent*> static R& showToNewPlayersComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = AvailablePlatformComponent*> R get_availablePlatform() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AE7D4))(this);
	}
	template <typename R = bool> R get_hasAvailablePlatform() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AE85C))(this);
	}
	template <typename R = void> R AddAvailablePlatform(AvailablePlatform* newType) {
		return ((R (*)(NewsEntity*, AvailablePlatform*))(Il2CppBase() + 0x13AE868))(this, newType);
	}
	template <typename R = void> R ReplaceAvailablePlatform(AvailablePlatform* newType) {
		return ((R (*)(NewsEntity*, AvailablePlatform*))(Il2CppBase() + 0x13AE96C))(this, newType);
	}
	template <typename R = void> R RemoveAvailablePlatform() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEA70))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEA7C))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEB04))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(NewsEntity*, int32_t))(Il2CppBase() + 0x13AE4C8))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(NewsEntity*, int32_t))(Il2CppBase() + 0x13AEB10))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEC14))(this);
	}
	template <typename R = InvalidationDateComponent*> R get_invalidationDate() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEC20))(this);
	}
	template <typename R = bool> R get_hasInvalidationDate() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AECA8))(this);
	}
	template <typename R = void> R AddInvalidationDate(int64_t newValue) {
		return ((R (*)(NewsEntity*, int64_t))(Il2CppBase() + 0x13AECB4))(this, newValue);
	}
	template <typename R = void> R ReplaceInvalidationDate(int64_t newValue) {
		return ((R (*)(NewsEntity*, int64_t))(Il2CppBase() + 0x13AEDB8))(this, newValue);
	}
	template <typename R = void> R RemoveInvalidationDate() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEEBC))(this);
	}
	template <typename R = bool> R get_wasRead() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEEC8))(this);
	}
	template <typename R = void> R set_wasRead(bool value) {
		return ((R (*)(NewsEntity*, bool))(Il2CppBase() + 0x13AEED4))(this, value);
	}
	template <typename R = bool> R get_needShowToNewPlayers() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AEFEC))(this);
	}
	template <typename R = void> R set_needShowToNewPlayers(bool value) {
		return ((R (*)(NewsEntity*, bool))(Il2CppBase() + 0x13AEFF8))(this, value);
	}
	template <typename R = TextComponent*> R get_text() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF110))(this);
	}
	template <typename R = bool> R get_hasText() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF198))(this);
	}
	template <typename R = void> R AddText(Il2CppString* newValue) {
		return ((R (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF1A4))(this, newValue);
	}
	template <typename R = void> R ReplaceText(Il2CppString* newValue) {
		return ((R (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF2B8))(this, newValue);
	}
	template <typename R = void> R RemoveText() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF3CC))(this);
	}
	template <typename R = TitleComponent*> R get_title() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF3D8))(this);
	}
	template <typename R = bool> R get_hasTitle() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF460))(this);
	}
	template <typename R = void> R AddTitle(Il2CppString* newValue) {
		return ((R (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF46C))(this, newValue);
	}
	template <typename R = void> R ReplaceTitle(Il2CppString* newValue) {
		return ((R (*)(NewsEntity*, Il2CppString*))(Il2CppBase() + 0x13AF580))(this, newValue);
	}
	template <typename R = void> R RemoveTitle() {
		return ((R (*)(NewsEntity*))(Il2CppBase() + 0x13AF694))(this);
	}

};

