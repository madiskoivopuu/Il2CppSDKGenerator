#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfflineDeathInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathInfoComponent"));
	}

	template <typename R = DamageStatType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& LocationName() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OfflineDeathInfoComponent*, Il2CppObject*))(Il2CppBase() + 0x11D9388))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(OfflineDeathInfoComponent*, uintptr_t))(Il2CppBase() + 0x11D9468))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(OfflineDeathInfoComponent*, uintptr_t))(Il2CppBase() + 0x11D95C0))(this, writer);
	}

};

