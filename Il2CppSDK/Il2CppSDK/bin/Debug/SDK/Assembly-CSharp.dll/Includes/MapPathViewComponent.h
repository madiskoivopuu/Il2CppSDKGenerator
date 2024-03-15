#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathViewComponent"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& Points() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<float>*> R& Segments() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& StartId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& EndId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& TotalDistance() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = bool> R IsValidPath(Il2CppString* startId, Il2CppString* endId) {
		return ((R (*)(MapPathViewComponent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12BEFF8))(this, startId, endId);
	}

};

