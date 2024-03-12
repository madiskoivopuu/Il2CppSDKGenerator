#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILogSaver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILogSaver"));
	}


	template <typename T = Il2CppList<uintptr_t>*> T GetLastLogs(int32_t count, int32_t id, Il2CppString* filter) {
		return ((T (*)(ILogSaver*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, count, id, filter);
	}

};

}
