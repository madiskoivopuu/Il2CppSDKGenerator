#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayOutComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayOutComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PlayOutComponent*, Il2CppObject*))(Il2CppBase() + 0x1702488))(this, targetObject);
	}

};

