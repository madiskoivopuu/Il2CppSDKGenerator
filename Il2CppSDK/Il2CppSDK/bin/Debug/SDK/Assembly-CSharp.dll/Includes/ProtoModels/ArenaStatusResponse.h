#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatusResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatusResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaStatusResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStatusResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CountArenaWorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countArenaWorlds_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UsedArenaWorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& usedArenaWorlds_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& CpuFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cpu_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& AvgCpuFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& avgCpu_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& FpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& fps_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& Fps10FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& fps10_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& Fps5FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& fps5_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& SetFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& setFps_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& SpectreWorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_spectreWorlds_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int64_t>*& spectreWorlds_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& SpectreUsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_spectreUsers_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<int64_t>*& spectreUsers_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& SpectreGmapsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_spectreGmaps_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<int64_t>*& spectreGmaps_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& CheatersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::UserCheater*>*& _repeated_cheaters_codec() {
		return *(FieldCodec1<ProtoModels::UserCheater*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<ProtoModels::UserCheater*>*& cheaters_() {
		return *(RepeatedField1<ProtoModels::UserCheater*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& NotFoundUsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_notFoundUsers_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1<int64_t>*& notFoundUsers_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& QuestProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaGuildUserQuestProgress*>*& _repeated_questProgress_codec() {
		return *(FieldCodec1<ProtoModels::ArenaGuildUserQuestProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 RepeatedField1<ProtoModels::ArenaGuildUserQuestProgress*>*& questProgress_() {
		return *(RepeatedField1<ProtoModels::ArenaGuildUserQuestProgress*>**)((uintptr_t)this + 0x68);
	}

	 static MessageParser1<ProtoModels::ArenaStatusResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStatusResponse*>* (*)(void *))(Il2CppBase() + 0x27155D0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2715634))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715754))(this);
	}
	template <typename R = ProtoModels::ArenaStatusResponse*> R Clone() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715AFC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715B58))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715B60))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715B68))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaStatusResponse*, Il2CppString*))(Il2CppBase() + 0x2715B70))(this, value);
	}
	template <typename R = int32_t> R get_CountArenaWorlds() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715BF0))(this);
	}
	template <typename R = void> R set_CountArenaWorlds(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715BF8))(this, value);
	}
	template <typename R = int32_t> R get_UsedArenaWorlds() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C00))(this);
	}
	template <typename R = void> R set_UsedArenaWorlds(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C08))(this, value);
	}
	template <typename R = int32_t> R get_Cpu() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C10))(this);
	}
	template <typename R = void> R set_Cpu(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C18))(this, value);
	}
	template <typename R = int32_t> R get_AvgCpu() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C20))(this);
	}
	template <typename R = void> R set_AvgCpu(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C28))(this, value);
	}
	template <typename R = int32_t> R get_Fps() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C30))(this);
	}
	template <typename R = void> R set_Fps(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C38))(this, value);
	}
	template <typename R = int32_t> R get_Fps10() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C40))(this);
	}
	template <typename R = void> R set_Fps10(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C48))(this, value);
	}
	template <typename R = int32_t> R get_Fps5() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C50))(this);
	}
	template <typename R = void> R set_Fps5(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C58))(this, value);
	}
	template <typename R = int32_t> R get_SetFps() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C60))(this);
	}
	template <typename R = void> R set_SetFps(int32_t value) {
		return ((R (*)(ArenaStatusResponse*, int32_t))(Il2CppBase() + 0x2715C68))(this, value);
	}
	 RepeatedField1<int64_t>* get_SpectreWorlds() {
		return ((RepeatedField1<int64_t>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C70))(this);
	}
	 RepeatedField1<int64_t>* get_SpectreUsers() {
		return ((RepeatedField1<int64_t>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C78))(this);
	}
	 RepeatedField1<int64_t>* get_SpectreGmaps() {
		return ((RepeatedField1<int64_t>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C80))(this);
	}
	 RepeatedField1<ProtoModels::UserCheater*>* get_Cheaters() {
		return ((RepeatedField1<ProtoModels::UserCheater*>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C88))(this);
	}
	 RepeatedField1<int64_t>* get_NotFoundUsers() {
		return ((RepeatedField1<int64_t>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C90))(this);
	}
	 RepeatedField1<ProtoModels::ArenaGuildUserQuestProgress*>* get_QuestProgress() {
		return ((RepeatedField1<ProtoModels::ArenaGuildUserQuestProgress*>* (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715C98))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStatusResponse*, Il2CppObject*))(Il2CppBase() + 0x2715CA0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStatusResponse* other) {
		return ((R (*)(ArenaStatusResponse*, ProtoModels::ArenaStatusResponse*))(Il2CppBase() + 0x2715D10))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x2715EE0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x27160F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStatusResponse*, uintptr_t))(Il2CppBase() + 0x2716158))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStatusResponse*))(Il2CppBase() + 0x27164A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStatusResponse* other) {
		return ((R (*)(ArenaStatusResponse*, ProtoModels::ArenaStatusResponse*))(Il2CppBase() + 0x27168AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStatusResponse*, uintptr_t))(Il2CppBase() + 0x2716A34))(this, input);
	}

};

}
