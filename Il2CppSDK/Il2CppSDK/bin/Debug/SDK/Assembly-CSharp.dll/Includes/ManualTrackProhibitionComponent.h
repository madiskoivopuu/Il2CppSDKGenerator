#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualTrackProhibitionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualTrackProhibitionComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ManualTrackProhibitionComponent*, uintptr_t))(Il2CppBase() + 0x1267730))(this, target);
	}

};

}
