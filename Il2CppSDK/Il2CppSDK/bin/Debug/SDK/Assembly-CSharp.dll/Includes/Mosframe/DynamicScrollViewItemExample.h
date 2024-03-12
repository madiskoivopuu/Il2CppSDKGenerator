#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class DynamicScrollViewItemExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicScrollViewItemExample"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& background() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T onUpdateItem(int32_t index) {
		return ((T (*)(DynamicScrollViewItemExample*, int32_t))(Il2CppBase() + 0x1A99D60))(this, index);
	}

};

}
