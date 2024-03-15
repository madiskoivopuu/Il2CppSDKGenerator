#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStat"));
	}

	template <typename R = DamageStatType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Class() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& Item() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& BattleId() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DamageStat*, Il2CppObject*))(Il2CppBase() + 0x164B9D4))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DamageStat*, uintptr_t))(Il2CppBase() + 0x164BAE0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DamageStat*, uintptr_t))(Il2CppBase() + 0x164BCE8))(this, writer);
	}

};

