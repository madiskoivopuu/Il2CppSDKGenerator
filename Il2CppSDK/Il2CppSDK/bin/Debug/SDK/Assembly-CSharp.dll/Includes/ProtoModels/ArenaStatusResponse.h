#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatusResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatusResponse"));
	}

	template <typename T = MessageParser1ArenaStatusResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CountArenaWorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countArenaWorlds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UsedArenaWorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& usedArenaWorlds_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& CpuFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cpu_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& AvgCpuFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& avgCpu_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& FpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& fps_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& Fps10FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& fps10_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& Fps5FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& fps5_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& SetFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& setFps_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& SpectreWorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_spectreWorlds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int64_t>*> T& spectreWorlds_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& SpectreUsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_spectreUsers_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1int64_t>*> T& spectreUsers_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& SpectreGmapsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_spectreGmaps_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1int64_t>*> T& spectreGmaps_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& CheatersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1UserCheater*>*> static T& _repeated_cheaters_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1UserCheater*>*> T& cheaters_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& NotFoundUsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_notFoundUsers_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = RepeatedField1int64_t>*> T& notFoundUsers_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& QuestProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaGuildUserQuestProgress*>*> static T& _repeated_questProgress_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = RepeatedField1ArenaGuildUserQuestProgress*>*> T& questProgress_() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = MessageParser1ArenaStatusResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x27155D0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2715634))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715754))(this);
	}
	template <typename T = ArenaStatusResponse*> T Clone() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715AFC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715B58))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715B60))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715B68))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaStatusResponse*, Il2CppString*))(Il2CppBase() + 0x2715B70))(this, value);
	}
	template <typename T = int32_t> T get_CountArenaWorlds() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715BF0))(this);
	}
	template <typename T = void> T set_CountArenaWorlds(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715BF8))(this, value);
	}
	template <typename T = int32_t> T get_UsedArenaWorlds() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C00))(this);
	}
	template <typename T = void> T set_UsedArenaWorlds(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C08))(this, value);
	}
	template <typename T = int32_t> T get_Cpu() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C10))(this);
	}
	template <typename T = void> T set_Cpu(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C18))(this, value);
	}
	template <typename T = int32_t> T get_AvgCpu() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C20))(this);
	}
	template <typename T = void> T set_AvgCpu(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C28))(this, value);
	}
	template <typename T = int32_t> T get_Fps() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C30))(this);
	}
	template <typename T = void> T set_Fps(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C38))(this, value);
	}
	template <typename T = int32_t> T get_Fps10() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C40))(this);
	}
	template <typename T = void> T set_Fps10(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C48))(this, value);
	}
	template <typename T = int32_t> T get_Fps5() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C50))(this);
	}
	template <typename T = void> T set_Fps5(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C58))(this, value);
	}
	template <typename T = int32_t> T get_SetFps() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C60))(this);
	}
	template <typename T = void> T set_SetFps(int32_t value) {
		return ((T (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C68))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_SpectreWorlds() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C70))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_SpectreUsers() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C78))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_SpectreGmaps() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C80))(this);
	}
	template <typename T = RepeatedField1UserCheater*>*> T get_Cheaters() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C88))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_NotFoundUsers() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C90))(this);
	}
	template <typename T = RepeatedField1ArenaGuildUserQuestProgress*>*> T get_QuestProgress() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C98))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStatusResponse*, Il2CppObject*))(Il2CppBase() + 0x2715CA0))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStatusResponse* other) {
		return ((T (*)(ArenaStatusResponse*, ArenaStatusResponse*))(Il2CppBase() + 0x2715D10))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715EE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x27160F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStatusResponse*, uintptr_t))(Il2CppBase() + 0x2716158))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStatusResponse*))(Il2CppBase() + 0x27164A0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStatusResponse* other) {
		return ((T (*)(ArenaStatusResponse*, ArenaStatusResponse*))(Il2CppBase() + 0x27168AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStatusResponse*, uintptr_t))(Il2CppBase() + 0x2716A34))(this, input);
	}

};

}
