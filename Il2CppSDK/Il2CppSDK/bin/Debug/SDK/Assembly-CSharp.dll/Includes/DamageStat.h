#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStat"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Class() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Item() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& BattleId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(DamageStat*, uintptr_t))(Il2CppBase() + 0x164B9D4))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DamageStat*, uintptr_t))(Il2CppBase() + 0x164BAE0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DamageStat*, uintptr_t))(Il2CppBase() + 0x164BCE8))(this, writer);
	}

};

}
