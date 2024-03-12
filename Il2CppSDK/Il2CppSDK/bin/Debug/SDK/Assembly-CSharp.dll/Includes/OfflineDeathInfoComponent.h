#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfflineDeathInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathInfoComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LocationName() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(OfflineDeathInfoComponent*, uintptr_t))(Il2CppBase() + 0x11D9388))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(OfflineDeathInfoComponent*, uintptr_t))(Il2CppBase() + 0x11D9468))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(OfflineDeathInfoComponent*, uintptr_t))(Il2CppBase() + 0x11D95C0))(this, writer);
	}

};

}
