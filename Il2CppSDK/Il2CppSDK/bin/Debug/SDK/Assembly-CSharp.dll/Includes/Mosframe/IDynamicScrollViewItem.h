#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class IDynamicScrollViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "IDynamicScrollViewItem"));
	}


	template <typename R = void> R onUpdateItem(int32_t index) {
		return ((R (*)(IDynamicScrollViewItem*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
