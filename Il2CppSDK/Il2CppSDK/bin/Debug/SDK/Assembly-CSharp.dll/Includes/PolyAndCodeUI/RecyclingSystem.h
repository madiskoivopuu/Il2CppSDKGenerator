#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "RecyclingSystem"));
	}

	template <typename R = PolyAndCodeUI::IRecyclableScrollRectDataSource*> R& DataSource() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Viewport() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Content() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& PrototypeCell() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsGrid() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& MinPoolCoverage() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> R& MinPoolSize() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& RecyclingThreshold() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = uintptr_t> R InitCoroutine(uintptr_t onInitialized) {
		return ((R (*)(RecyclingSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, onInitialized);
	}
	template <typename R = uintptr_t> R OnValueChangedListener(uintptr_t direction) {
		return ((R (*)(RecyclingSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, direction);
	}

};

}
