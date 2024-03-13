#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathViewComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Segments() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& StartId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EndId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& TotalDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T IsValidPath(Il2CppString* startId, Il2CppString* endId) {
		return ((T (*)(MapPathViewComponent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12BEFF8))(this, startId, endId);
	}

};

