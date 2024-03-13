#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "RecyclingSystem"));
	}

	template <typename T = IRecyclableScrollRectDataSource*> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Viewport() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PrototypeCell() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsGrid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MinPoolCoverage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MinPoolSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& RecyclingThreshold() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T InitCoroutine(uintptr_t onInitialized) {
		return ((T (*)(RecyclingSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, onInitialized);
	}
	template <typename T = uintptr_t> T OnValueChangedListener(uintptr_t direction) {
		return ((T (*)(RecyclingSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, direction);
	}

};

}
