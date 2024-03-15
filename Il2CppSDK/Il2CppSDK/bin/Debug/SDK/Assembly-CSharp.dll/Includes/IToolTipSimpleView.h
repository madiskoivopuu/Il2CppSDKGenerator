#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipSimpleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipSimpleView"));
	}


	template <typename R = void> R Bind(IToolTipSource* source, Il2CppString* caption, Il2CppArray<Il2CppString*>* description) {
		return ((R (*)(IToolTipSimpleView*, IToolTipSource*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, source, caption, description);
	}
	template <typename R = bool> R get_IsInited() {
		return ((R (*)(IToolTipSimpleView*))(Il2CppBase() + 0x0))(this);
	}

};

