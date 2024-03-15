#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContentSizeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContentSizeData"));
	}

	template <typename R = float> R& elementSize() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& elementHalfSize() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& elementPlusSpace() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& contentSize() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& middlePoint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& viewSize() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& viewHalfSize() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& maxLeftPozition() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& milestoneItemWidth() {
		return *(R*)((uintptr_t)this + 0x30);
	}


};

