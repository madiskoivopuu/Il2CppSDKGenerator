#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class DynamicScrollViewItemExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicScrollViewItemExample"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& colors() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& title() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& background() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R onUpdateItem(int32_t index) {
		return ((R (*)(DynamicScrollViewItemExample*, int32_t))(Il2CppBase() + 0x1A99D60))(this, index);
	}

};

}
