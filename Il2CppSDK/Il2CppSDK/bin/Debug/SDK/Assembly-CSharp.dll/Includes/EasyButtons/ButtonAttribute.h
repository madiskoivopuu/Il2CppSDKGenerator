#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace EasyButtons {

class ButtonAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EasyButtons", "ButtonAttribute"));
	}

	template <typename R = EasyButtons::ButtonMode*> R& mode() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

}
