#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DraggedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DraggedComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DraggedComponent*, Il2CppObject*))(Il2CppBase() + 0x13057B0))(this, targetObject);
	}

};
