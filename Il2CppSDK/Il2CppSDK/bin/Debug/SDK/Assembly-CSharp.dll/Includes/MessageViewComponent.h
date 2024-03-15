#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageViewComponent"));
	}

	template <typename R = ChatMessageView*> R& View() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

