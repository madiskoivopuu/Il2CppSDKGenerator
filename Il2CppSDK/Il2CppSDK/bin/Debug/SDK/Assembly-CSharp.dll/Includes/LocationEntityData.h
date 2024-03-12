#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationEntityData"));
	}

	template <typename T = bool> T& HasNoId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OwnerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& TicksTillReset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& PortalData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& GeneratorParams() {
		return *(T*)((uintptr_t)this + 0x68);
	}


};

}
