#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContentSizeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContentSizeData"));
	}

	template <typename T = float> T& elementSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& elementHalfSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& elementPlusSpace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& contentSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& middlePoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& viewSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& viewHalfSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxLeftPozition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& milestoneItemWidth() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
