#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToolTipViewBase.h" 

class ToolTipSimpleViewItem : public ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipSimpleViewItem"));
	}

	template <typename T = bool> T& _isAutomative() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _titleKey() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _textKeys() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _title() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _text() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Bind(IToolTipSource* source, Il2CppString* caption, Il2CppArray<uintptr_t>* description) {
		return ((T (*)(ToolTipSimpleViewItem*, IToolTipSource*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14F1F04))(this, source, caption, description);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F21D4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F1F5C))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F21E4))(this);
	}

};

