#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHistoryContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHistoryContexts"));
	}


	template <typename R = HistoryContext*> R get_history() {
		return ((R (*)(IHistoryContexts*))(Il2CppBase() + 0x0))(this);
	}

};

